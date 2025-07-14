# Build instructions (Mac and Linux)

Boost 1.81.0 minimum and OpenSSL is required. 


Build all examples under the Linux folder

```
mkdir build
cd build
cmake ..
cmake --build .
```

Targeting a specific artifact, for example StockPrint

```
mkdir build
cd build
cmake ..
cmake --build . --target stkprt
```



