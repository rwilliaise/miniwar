
#include "Shader.h"
#include "glad/gl.h"

#include <fstream>
#include <iostream>
#include <iterator>
#include <sstream>

namespace miniwar {
namespace render {

static void shader_check_error(uint32_t shader) {
    int success;
    glGetShaderiv(shader, GL_COMPILE_STATUS, &success);
    if (success != GL_TRUE) {
        char log[512];
        glGetShaderInfoLog(shader, 512, nullptr, log);
        std::cout << "GL ERROR (compile): " << log << "\n";
    }
}

Shader::Shader(std::filesystem::path &vertex_path, std::filesystem::path &fragment_path) {
    std::string vertex_data;
    std::string fragment_data;

    {
        std::ifstream vertex(vertex_path);
        std::ifstream fragment(fragment_path);
        vertex_data.assign(std::istreambuf_iterator<char>(vertex),
                           std::istreambuf_iterator<char>());
        fragment_data.assign(std::istreambuf_iterator<char>(fragment),
                             std::istreambuf_iterator<char>());
    }

    uint32_t vertex_shader = glCreateShader(GL_VERTEX_SHADER);
    uint32_t fragment_shader = glCreateShader(GL_FRAGMENT_SHADER);

    {
        const char *vertex_cstr = vertex_data.c_str();
        const char *fragment_cstr = fragment_data.c_str();
        glShaderSource(vertex_shader, 1, &vertex_cstr, nullptr);
        glShaderSource(fragment_shader, 1, &fragment_cstr, nullptr);
    }

    glCompileShader(vertex_shader);
    glCompileShader(fragment_shader);

    shader_check_error(vertex_shader);
    shader_check_error(fragment_shader);

    program = glCreateProgram();

    glAttachShader(program, vertex_shader);
    glAttachShader(program, fragment_shader);
    glLinkProgram(program);
    
    glDeleteShader(vertex_shader);
    glDeleteShader(fragment_shader);
}

Shader::~Shader() {
    glDeleteProgram(program);
}

}
}

