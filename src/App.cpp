
#include "App.h"
#include <GLFW/glfw3.h>

namespace miniwar {

App::~App() {
    glfwDestroyWindow(window);
    glfwTerminate();
}

int App::run() {
    window = glfwCreateWindow(640, 480, "miniwar", nullptr, nullptr);

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


