
#ifndef MINIWAR_WORLD_H_
#define MINIWAR_WORLD_H_

#include "Map.h"
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
    std::unique_ptr<Map> map;

};

}
}


#endif // MINIWAR_WORLD_H_
