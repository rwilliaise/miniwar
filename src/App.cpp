
#include "App.h"
#include <GLFW/glfw3.h>
#include <iostream>

namespace miniwar {

uint32_t vao;
uint32_t vbo;

App::~App() {
    glfwDestroyWindow(window);
    glfwTerminate();
}

int App::run() {
    glfwSetErrorCallback([](int code, const char *msg) {
        std::cout << "GLFW ERROR (" << code << "): " << msg << "\n";
    });   

    if (glfwInit() != GLFW_TRUE) {
        return 1;
    }

    window = glfwCreateWindow(640, 480, "miniwar", nullptr, nullptr);
    if (window == nullptr) {
        return 1;
    }

    glGenVertexArrays(1, &vao);
    glGenBuffers(1, &vbo);

    glfwSetWindowUserPointer(window, this);

    glfwMakeContextCurrent(window);
    gladLoadGL(glfwGetProcAddress);

    while (!glfwWindowShouldClose(window)) {
        render();
        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    return 0; 
}

void App::render() {
    glClear(GL_COLOR_BUFFER_BIT);
}

}


