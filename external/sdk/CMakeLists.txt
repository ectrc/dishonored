cmake_minimum_required(VERSION 3.27)
project(sdk)

set(CMAKE_CXX_STANDARD 23)

file(GLOB_RECURSE SOURCES "src/*.cpp")

add_library(sdk STATIC ${SOURCES}
        include/sdk.hpp
        include/defs.hpp
        include/defs.cpp
)

target_include_directories(sdk PUBLIC include)