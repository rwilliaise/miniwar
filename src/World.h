
#ifndef MINIWAR_WORLD_H_
#define MINIWAR_WORLD_H_

#include "Nation.h"
#include <cstdint>
#include <filesystem>
#include <vector>

namespace miniwar {
namespace game {

class World {
public:

    void save(std::filesystem::path path);
    void load(std::filesystem::path path);

private:
    uint64_t day;
    std::vector<Nation> nations;

};

}
}


#endif // MINIWAR_WORLD_H_
