## Сборка примеров Catch2.

link ***https://github.com/catchorg/Catch2***

### Сборка с использованием CMake
```sh
mkdir build
cd build
cmake -G "Unix Makefiles" -DCMAKE_C_COMPILER=gcc -DCMAKE_CXX_COMPILER=g++ -DCMAKE_BUILD_TYPE=Release -DBUILD_UNIT_TESTS=ON ..
cmake --build .
```
