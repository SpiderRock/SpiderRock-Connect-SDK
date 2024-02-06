#pragma once

#include <Windows.h>
#include <winhttp.h>
#include <memory>
#include <locale>
#include <codecvt>
#include <string>
#include <algorithm>
#include "spiderrock_mlink_base.hpp"

namespace spiderrock {
	namespace mlink {

		namespace details {
			class Context {
				HINTERNET  hSession = NULL;
				DWORD dwError = ERROR_SUCCESS;

			public:
				Context() {
					hSession = WinHttpOpen(L"MLink Client/1.0",
						WINHTTP_ACCESS_TYPE_DEFAULT_PROXY,
						WINHTTP_NO_PROXY_NAME,
						WINHTTP_NO_PROXY_BYPASS, 0);

					if (hSession == NULL) {
						dwError = GetLastError();
					}
				}

				~Context() {
					if (hSession) {
						WinHttpCloseHandle(hSession);
						hSession = NULL;
					}
				}

				HINTERNET Session() const { return hSession; }

				DWORD getLastError() { return dwError; }
			};

		}

		template <bool usingSSL>
		class WebSocket : public ISocket {

			details::Context &context;
			HINTERNET  hConnect = NULL;
			HINTERNET  hRequest = NULL;
			HINTERNET  hWebSocket = NULL;
			DWORD dwError = ERROR_SUCCESS;
			WINHTTP_WEB_SOCKET_BUFFER_TYPE bufferType{};
            bool is_protobuf = false;
			
			std::string GetLastErrorAsString() const {
                // Convert the stored error code to a human-readable string.
                DWORD errorMessageID = dwError;
                LPVOID messageBuffer = nullptr;
                DWORD size = FormatMessage(
                    FORMAT_MESSAGE_ALLOCATE_BUFFER | FORMAT_MESSAGE_FROM_SYSTEM | FORMAT_MESSAGE_IGNORE_INSERTS,
                    nullptr,
                    errorMessageID,
                    0, // Default language
                    (LPWSTR)&messageBuffer,
                    0,
                    nullptr);

                if (size == 0) {
                    // If unable to get the error message, return a default message.
                    return "Error code: " + std::to_string(errorMessageID);
                }

                std::wstring messageWstring(static_cast<LPCWSTR>(messageBuffer));
                LocalFree(messageBuffer);

                // Convert the wide string to a UTF-8 string.
                return std::wstring_convert<std::codecvt_utf8<wchar_t>>().to_bytes(messageWstring);
            }

		public:
			WebSocket(details::Context &context) : context(context) {
			}

			~WebSocket() override {
				cleanup();
			}

			bool connect(const std::wstring & host, unsigned short port, const std::wstring & path, const std::wstring & extraInfo, const std::wstring & apikey) {
                if (path.find(L"proto") != std::string::npos) {
                    is_protobuf = true;
                }

                if (!context.Session()) {
					dwError = context.getLastError();
					return false;
				}

				hConnect = WinHttpConnect(context.Session(), host.c_str(), port, 0);

				if (hConnect == NULL)
				{
					dwError = GetLastError();
					return false;
				}

				if (hConnect)
					hRequest = WinHttpOpenRequest(hConnect,
						L"GET",
						path.c_str(),
						NULL,
						WINHTTP_NO_REFERER,
						WINHTTP_DEFAULT_ACCEPT_TYPES,
						usingSSL ? WINHTTP_FLAG_SECURE : NULL); // flags

				if (hRequest == NULL)
				{
					dwError = GetLastError();
					return false;
				}

#pragma prefast(suppress:6387, "WINHTTP_OPTION_UPGRADE_TO_WEB_SOCKET does not take any arguments.")
				bool bResults = WinHttpSetOption(hRequest,
					WINHTTP_OPTION_UPGRADE_TO_WEB_SOCKET,
					NULL,
					0);

				if (!bResults)
				{
					dwError = GetLastError();
					return false;
				}

				std::wstring authkey = L"Authorization: Bearer " + apikey;
				// Send a request.
				if (hRequest)
					bResults = WinHttpSendRequest(hRequest,
						authkey.c_str(),
						-1L,
						WINHTTP_NO_REQUEST_DATA,
						0,  // request data length
						0,  // total length
						0); // context

				if (!bResults)
				{
					dwError = GetLastError();
					return false;
				}

				bResults = WinHttpReceiveResponse(hRequest, 0);

				if (!bResults)
				{
					dwError = GetLastError();
					return false;
				}

				if (hRequest)
					hWebSocket = WinHttpWebSocketCompleteUpgrade(hRequest, NULL);

				if (hWebSocket == NULL)
				{
					dwError = GetLastError();
					return false;
				}

				if (hRequest) {
					WinHttpCloseHandle(hRequest);
					hRequest = NULL;
				}

				return true;
			}

			void cleanup() override {
				if (hWebSocket) {
					WinHttpCloseHandle(hWebSocket);
					hWebSocket = NULL;
				}
				if (hRequest) {
					WinHttpCloseHandle(hRequest);
					hRequest = NULL;
				}
				if (hConnect) {
					WinHttpCloseHandle(hConnect);
					hConnect = NULL;
				}
			}

			void shutdown() override {
				if (hWebSocket) {
					WinHttpWebSocketShutdown(hWebSocket, WINHTTP_WEB_SOCKET_SUCCESS_CLOSE_STATUS, NULL, 0);
				}
			}

			void close() override {
				if (hWebSocket) {
					WinHttpWebSocketClose(hWebSocket, WINHTTP_WEB_SOCKET_SUCCESS_CLOSE_STATUS, NULL, 0);
				}
			}

			int read(char *buffer, size_t size) override {
				dwError = ERROR_SUCCESS;
				if (!hWebSocket) {
					dwError = ERROR_CONNECTION_INVALID;
					return -1;
				}
				DWORD bytesRead = 0;
				bufferType = static_cast<WINHTTP_WEB_SOCKET_BUFFER_TYPE>(0);
				DWORD result = WinHttpWebSocketReceive(hWebSocket, buffer, (DWORD)size, &bytesRead, &bufferType);
				if (result == NO_ERROR) {
					dwError = ERROR_SUCCESS;
					return (int)bytesRead;
				}
				else {
					dwError = result;
					return 0;
				}
			}

			int write(const char *buffer, size_t len) override {
				dwError = ERROR_SUCCESS;
				if (!hWebSocket) {
					dwError = ERROR_CONNECTION_INVALID;
					return -1;
				}
				DWORD result = WinHttpWebSocketSend(hWebSocket, WINHTTP_WEB_SOCKET_BINARY_MESSAGE_BUFFER_TYPE, (PVOID)buffer, (DWORD)len);
				if (result == NO_ERROR) {
					dwError = ERROR_SUCCESS;
					return (int)len;
				}
				else {
					dwError = result;
					return 0;
				}
			}

			int getLastError() override {
				return static_cast<int>(dwError);
			}

            bool isProtobuf() const override { return is_protobuf; }
			
			bool isWebSocketMessageDone() const override { return bufferType != WINHTTP_WEB_SOCKET_BINARY_FRAGMENT_BUFFER_TYPE && bufferType != WINHTTP_WEB_SOCKET_UTF8_FRAGMENT_BUFFER_TYPE; }
			
			 // Error handling functions
            bool hasError() const override {
                // Check if the stored error code indicates an error.
                return dwError != ERROR_SUCCESS;
            }

            std::string getErrorString() const override {
                // Return the error message based on the stored error code.
                if (hasError()) {
                    return "Error code: " + std::to_string(dwError);
                }
                else {
                    return "No error.";
                }
            }
		};

		template <bool usingSSL>
		class HttpSocket : public ISocket {

			details::Context &context;
			HINTERNET  hConnect = NULL;
			HINTERNET  hRequest = NULL;
			DWORD dwError = ERROR_SUCCESS;

		public:
			HttpSocket(details::Context &context) : context(context) {
			}

			~HttpSocket() override {
				cleanup();
			}

			bool connect(const std::wstring & host, unsigned short port, const std::wstring & path, const std::wstring & extraInfo, const std::wstring & apikey) {
				if (!context.Session()) {
					dwError = context.getLastError();
					return false;
				}

				dwError = ERROR_SUCCESS;

				hConnect = WinHttpConnect(context.Session(), host.c_str(), port, 0);

				if (hConnect == NULL)
				{
					dwError = GetLastError();
					return false;
				}

				std::wstring path_cmd = path + L"?apikey=" + apikey + extraInfo;

				if (extraInfo.length() && extraInfo[0] == L'?') {
					auto last = path_cmd.find_last_of(L'?');
					if (last != std::wstring::npos) {
						path_cmd[last] = L'&';
					}
				}

				// Create an HTTP request handle.
				if (hConnect)
					hRequest = WinHttpOpenRequest(hConnect, L"GET", path_cmd.c_str(),
						NULL, WINHTTP_NO_REFERER,
						WINHTTP_DEFAULT_ACCEPT_TYPES,
						usingSSL ? WINHTTP_FLAG_SECURE : NULL);

				if (hRequest == NULL)
				{
					dwError = GetLastError();
					return false;
				}

				// Send a request.
				bool bResults = false;
				if (hRequest)
					bResults = WinHttpSendRequest(hRequest,
						WINHTTP_NO_ADDITIONAL_HEADERS,
						0, WINHTTP_NO_REQUEST_DATA, 0,
						0, 0);

				if (!bResults)
				{
					dwError = GetLastError();
					return false;
				}

				// End the request.
				if (bResults)
					bResults = WinHttpReceiveResponse(hRequest, NULL);

				if (!bResults)
				{
					dwError = GetLastError();
					return false;
				}

				return true;
			}

			void cleanup() override {
				if (hRequest) {
					WinHttpCloseHandle(hRequest);
					hRequest = NULL;
				}
				if (hConnect) {
					WinHttpCloseHandle(hConnect);
					hConnect = NULL;
				}
			}

			void shutdown() override {
				cleanup();
			}

			void close() override {
				cleanup();
			}

			int read(char *buffer, size_t size) override {
				dwError = ERROR_SUCCESS;
				if (!hRequest) {
					dwError = ERROR_CONNECTION_INVALID;
					return -1;
				}
				DWORD dwSize = 0;
				if (!WinHttpQueryDataAvailable(hRequest, &dwSize))
				{
					dwError = GetLastError();
					return -1;
				}

				if (!dwSize) {
					return 0;
				}

				DWORD dwDownloaded = 0;
				if (!WinHttpReadData(hRequest, (LPVOID)buffer,
					(DWORD)size, &dwDownloaded))
				{
					dwError = GetLastError();
					return -1;
				}

				return (int)dwDownloaded;
			}

			int write(const char *buffer, size_t len) override { return 0; }

			int getLastError() override {
				return static_cast<int>(dwError);
			}
			
			bool isWebSocketMessageDone() const override { return true; }
			
			// Error handling functions
            bool hasError() const override {
                // Check if the stored error code indicates an error.
                return dwError != ERROR_SUCCESS;
            }

            std::string getErrorString() const override {
                // Return the error message based on the stored error code.
                if (hasError()) {
                    DWORD errorMessageID = dwError;
                    LPVOID messageBuffer = nullptr;
                    DWORD size = FormatMessage(
                        FORMAT_MESSAGE_ALLOCATE_BUFFER | FORMAT_MESSAGE_FROM_SYSTEM | FORMAT_MESSAGE_IGNORE_INSERTS,
                        nullptr,
                        errorMessageID,
                        0, // Default language
                        (LPWSTR)&messageBuffer,
                        0,
                        nullptr);

                    if (size == 0) {
                        // If unable to get the error message, return a default message.
                        return "Error code: " + std::to_string(errorMessageID);
                    }

                    std::wstring messageWstring(static_cast<LPCWSTR>(messageBuffer));
                    LocalFree(messageBuffer);

                    // Convert the wide string to a UTF-8 string.
                    return std::wstring_convert<std::codecvt_utf8<wchar_t>>().to_bytes(messageWstring);
                }
                else {
                    return "No error.";
                }
            }

			private:
			void setLastError(const std::string& errorMessage) {
				dwError = getLastError();
			}
		};


		namespace details {
			bool connect(const std::string & url, const std::string & apikey, details::Context &context, std::unique_ptr<ISocket> &socket)
			{
				bool is_websocket = false;
				bool is_secure = false;
				int prefix_len = 0;
				if (url.substr(0, 3) == "ws:") {
					is_websocket = true;
					is_secure = false;
					prefix_len = 3;
				}
				else if (url.substr(0, 4) == "wss:") {
					is_websocket = true;
					is_secure = true;
					prefix_len = 4;
				}
				else if (url.substr(0, 5) == "http:") {
					is_websocket = false;
					is_secure = false;
					prefix_len = 5;
				}
				else if (url.substr(0, 6) == "https:") {
					is_websocket = false;
					is_secure = true;
					prefix_len = 6;
				}
				else {
					return false;
				}

                std::wstring wstr;
                std::transform(url.begin(), url.end(), std::back_inserter(wstr), [](char c) {
                    return (wchar_t)c;
                    });

				// WinHttpCrackUrl doesn't handle ws and wss, so we need to fake it and give it http and https instead
                std::wstring wurl = (is_secure ? L"https:" : L"http:") + wstr.substr(prefix_len);

				URL_COMPONENTS urlComp;
				LPCWSTR pwszUrl1 = wurl.data();
				DWORD dwUrlLen = 0;

				// Initialize the URL_COMPONENTS structure.
				ZeroMemory(&urlComp, sizeof(urlComp));
				urlComp.dwStructSize = sizeof(urlComp);

				// Set required component lengths to non-zero 
				// so that they are cracked.
				urlComp.dwSchemeLength = (DWORD)-1;
				urlComp.dwHostNameLength = (DWORD)-1;
				urlComp.dwUrlPathLength = (DWORD)-1;
				urlComp.dwExtraInfoLength = (DWORD)-1;

				// Crack the URL.
				if (!WinHttpCrackUrl(pwszUrl1, (DWORD)wcslen(pwszUrl1), 0, &urlComp))
				{
					return false;
				}
				else
				{
					std::wstring host(urlComp.lpszHostName, urlComp.dwHostNameLength);
					std::wstring path(urlComp.lpszUrlPath, urlComp.dwUrlPathLength);
					std::wstring extra(urlComp.lpszExtraInfo, urlComp.dwExtraInfoLength);
                    std::wstring key;
                    std::transform(apikey.begin(), apikey.end(), std::back_inserter(key), [](char c) {
                        return (wchar_t)c;
                        });

					if (is_websocket) {
						if (is_secure) {
							socket = std::make_unique<WebSocket<true>>(context);
							if (!static_cast<WebSocket<true>*>(socket.get())->connect(host, urlComp.nPort, path, extra, key)) {
								return false;
							}
						}
						else {
							socket = std::make_unique<WebSocket<false>>(context);
							if (!static_cast<WebSocket<false>*>(socket.get())->connect(host, urlComp.nPort, path, extra, key)) {
								return false;
							}
						}
					}
					else {
						if (is_secure) {
							socket = std::make_unique<HttpSocket<true>>(context);
							if (!static_cast<HttpSocket<true>*>(socket.get())->connect(host, urlComp.nPort, path, extra, key)) {
								return false;
							}
						}
						else {
							socket = std::make_unique<HttpSocket<false>>(context);
							if (!static_cast<HttpSocket<false>*>(socket.get())->connect(host, urlComp.nPort, path, extra, key)) {
								return false;
							}
						}
					}

				}
				return true;
			}

		};
	}
}