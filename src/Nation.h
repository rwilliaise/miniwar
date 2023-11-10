
#ifndef MINIWAR_NATION_H_
#define MINIWAR_NATION_H_

#include <memory>
#include <vector>
 
namespace miniwar {
namespace game {

class Nation;
struct NationStanding {
    Nation &nation;
    int standing;
};

class Nation : public std::enable_shared_from_this<Nation> {
public:

private: 
    std::vector<NationStanding> standing;

};

}
}

#endif // MINIWAR_NATION_H_
