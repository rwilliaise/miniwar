
#ifndef MINIWAR_SHADER_H_
#define MINIWAR_SHADER_H_

#include <cstdint>
#include <filesystem>

namespace miniwar {
namespace render {

class Shader {
public:

    explicit Shader(std::filesystem::path &vertex_path,
                    std::filesystem::path &fragment_path);
    ~Shader();
    
    Shader(const Shader &) = delete;
    Shader(Shader &&) = default;
    Shader &operator=(const Shader &) = delete;
    Shader &operator=(Shader &&) = default;

private:
    uint32_t program;
};

}
}

#endif // MINIWAR_SHADER_H_
