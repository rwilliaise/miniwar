cmake_minimum_required(VERSION 3.21)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXPORT_COMPILE_COMMANDS TRUE)

project(miniwar
    LANGUAGES CXX C
    VERSION 0.1.0
)

include(Content.cmake)

add_executable(miniwar
    src/App.cpp
    src/App.h
    src/main.cpp
    src/Nation.cpp
    src/Nation.h
    src/render.h
    src/stb_image.cpp
    src/stb_image.h
    src/World.cpp
    src/World.h
)
target_link_libraries(miniwar PRIVATE glfw glew)

