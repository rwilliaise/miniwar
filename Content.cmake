
include(FetchContent)

fetchcontent_declare(
    glfw3
    GIT_REPOSITORY https://github.com/glfw/glfw.git
    GIT_TAG 3.3.8
    FIND_PACKAGE_ARGS NAMES glfw3
)

fetchcontent_declare(
    glew
    GIT_REPOSITORY https://github.com/nigels-com/glew.git
    GIT_TAG glew-2.2.0
    FIND_PACKAGE_ARGS NAMES glew
)

fetchcontent_makeavailable(glfw3 glew)
