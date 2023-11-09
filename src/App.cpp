
#include "App.h"

namespace miniwar {

App::~App() {
    glfwDestroyWindow(window);
    glfwTerminate();
}


}


