cmake_minimum_required(VERSION 3.28)
project(spiderrock_client)
set(CMAKE_CXX_STANDARD 20)

if(POLICY CMP0167)
    cmake_policy(SET CMP0167 NEW)
endif()
find_package(Boost 1.81.0 COMPONENTS url REQUIRED)
find_package (Threads REQUIRED)
find_package(OpenSSL REQUIRED)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/headers/Codec)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/headers/Messages)
include_directories(${OPENSSL_INCLUDE_DIR})

#build stkprt
add_executable(stkprt ${CMAKE_CURRENT_SOURCE_DIR}/examples/Linux/StockPrint/StkPrt.cpp)
target_link_libraries(stkprt PUBLIC
        ${Boost_LIBRARIES}
        ${OPENSSL_LIBRARIES}
        Threads::Threads
)

#build livesurfaceprt
add_executable(livesurfaceprt ${CMAKE_CURRENT_SOURCE_DIR}/examples/Linux/LiveSurfaceCurve/livesurfaceprt.cpp)
target_link_libraries(livesurfaceprt PUBLIC
        ${Boost_LIBRARIES}
        ${OPENSSL_LIBRARIES}
        Threads::Threads
)

#build LiveImpliedQuoteMultipleStripes
add_executable(LiveImpliedQuoteMultipleStripes ${CMAKE_CURRENT_SOURCE_DIR}/examples/Linux/LiveImpliedQuote/LiveImpliedQuoteMultipleStripes.cpp)
target_link_libraries(LiveImpliedQuoteMultipleStripes PUBLIC
        ${Boost_LIBRARIES}
        ${OPENSSL_LIBRARIES}
        Threads::Threads
)

