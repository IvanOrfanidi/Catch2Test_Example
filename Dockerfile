FROM ubuntu:20.04

COPY . /Catch2Test_Example

WORKDIR /Catch2Test_Example

RUN apt-get update && \
    DEBIAN_FRONTEND="noninteractive" apt-get install -y git \
    gcc cmake build-essential && \
    # Install Catch2 Test
    git clone https://github.com/catchorg/Catch2.git && \
    cd Catch2 && \
    cmake -Bbuild -H. -DBUILD_TESTING=OFF && \
    cmake --build build/ --target install && \
    cd .. && rm -r Catch2 \
    && \
    # Build Project
    rm -rf build && \
    mkdir build && cd build && \
    cmake -G "Unix Makefiles" -DCMAKE_BUILD_TYPE=Release -DBUILD_UNIT_TESTS=ON .. && \
    cmake --build .

CMD ["./build/main_tests"]