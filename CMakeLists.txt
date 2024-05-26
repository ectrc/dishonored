cmake_minimum_required(VERSION 3.28)
project(dishonored)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_WARN_DEPRECATED OFF CACHE BOOL "" FORCE)
set(CMAKE_CXX_FLAGS /bigobj)

add_subdirectory(external/libhat)
add_subdirectory(external/minhook)
add_subdirectory(external/sdk)

add_library(dishonored SHARED
        main.cpp
        src/core.cpp
        src/hooks/hooks.cpp
        src/modules/module.cpp
        src/modules/npc/npc.cpp
        src/modules/maxpowers/maxpowers.cpp
        src/modules/godmode/godmode.cpp
        src/modules/items/items.cpp
        src/modules/teleport/teleport.cpp
)

target_link_libraries(dishonored PUBLIC libhat minhook sdk)
target_include_directories(dishonored PUBLIC include)