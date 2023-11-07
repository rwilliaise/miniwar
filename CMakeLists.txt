cmake_minimum_required(VERSION 3.21)

project(miniwar
    LANGUAGES CXX C
    VERSION 0.1.0
)

add_subdirectory(extern/sdl2)
add_subdirectory(extern/glew/build/cmake)

add_executable(miniwar
    src/main.cpp
)

