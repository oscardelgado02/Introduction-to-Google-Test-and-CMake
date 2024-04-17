cmake_minimum_required(VERSION 3.8)

set(This Example)

project(${This} C CXX)

set(CMAKE_C_STANDARD 17)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

enable_testing()

add_subdirectory(googletest)

set(Headers
    src/Example.hpp
    src/car.hpp
)
set(Sources
    src/Example.cpp
    src/car.cpp
)

add_library(${This} STATIC ${Sources} ${Headers})

add_subdirectory(test)
