# Version CMake
cmake_minimum_required(VERSION 3.10)

# Project name
project(main)

# Options
set(CMAKE_CXX_STANDARD 17)

# Compiler-specific options
add_compile_options(
    -Werror
    -Wall
    -Wextra
    -Wpedantic
)

# Source files
set(SOURCES
    source/main.cpp
    source/equal.cpp
    source/sum.cpp
    source/area_of_circle.cpp
)

# Source tests files
set(TEST_SOURCES
    tests/source/test_equal.cpp
    tests/source/test_sum.cpp
    tests/source/test_area_of_circle.cpp
    tests/source/test_less_than_zero.cpp
    source/equal.cpp
    source/sum.cpp
    source/area_of_circle.cpp
)

# Include directories
include_directories("${CMAKE_CURRENT_SOURCE_DIR}")

# Compiling target
add_executable(${PROJECT_NAME} ${SOURCES})

if(BUILD_UNIT_TESTS)
    find_package(Catch2 REQUIRED)

    # Compiling target for tests
    add_executable(${PROJECT_NAME}_tests ${TEST_SOURCES})

    # Link target with gtest
    target_link_libraries(${PROJECT_NAME}_tests Catch2::Catch2WithMain)
endif()