
#ifndef MINIWAR_APP_H_
#define MINIWAR_APP_H_

#include "World.h"
#include "render.h"

#include <memory>

namespace miniwar {

class App {
public: 
    explicit App(int &argc, char *argv[]): argc(argc), argv(argv) {}
    ~App();

    App(const App &) = default;
    App(App &&) = delete;
    App &operator=(const App &) = default;
    App &operator=(App &&) = delete;

    int run();

    void render();
    void game_tick();

private:
    std::shared_ptr<game::World> current_world;

    GLFWwindow *window = nullptr;
    int argc;
    char **argv;
};

}

#endif // MINIWAR_APP_H_

