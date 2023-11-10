
include(FetchContent)

fetchcontent_declare(
    glfw3
    GIT_REPOSITORY https://github.com/glfw/glfw.git
    GIT_TAG 3.3.8
    FIND_PACKAGE_ARGS NAMES glfw3
)

fetchcontent_makeavailable(glfw3)
