cmake_minimum_required(VERSION 3.16)
project(Functions)

set(CMAKE_CXX_STANDARD 20)

add_executable(Functions main.cpp functions.cpp functions.h StrorageClass.cpp StrorageClass.h)


if(EXISTS ${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
    include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
    conan_basic_setup()
else()
    message(WARNING "The file conanbuildinfo.cmake doesn't exist, you have to run conan install first")
endif()