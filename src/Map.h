
#ifndef MINIWAR_MAP_H_
#define MINIWAR_MAP_H_

#include "Mapel.h"
#include <vector>

namespace miniwar {
namespace game {

class Map {
public:

    inline Mapel &get(int x, int y) {
        return mapels[x * width + y];
    }

private:
    int width, height;
    std::vector<Mapel> mapels;

};

}
}

#endif // MINIWAR_MAP_H_
