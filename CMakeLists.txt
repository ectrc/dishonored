cmake_minimum_required(VERSION 3.28)
project(dishonored)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_WARN_DEPRECATED OFF CACHE BOOL "" FORCE)
set(CMAKE_CXX_FLAGS /bigobj)

add_subdirectory(external/libhat)
add_subdirectory(external/minhook)

add_library(dishonored SHARED
        library.cpp
        src/core.cpp
        src/hooks.cpp
)

target_link_libraries(dishonored PUBLIC libhat minhook)
target_include_directories(dishonored PUBLIC include)