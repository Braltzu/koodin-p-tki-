cmake_minimum_required(VERSION 3.5)

project(vk3te3 LANGUAGES C)

add_executable(vk3te3 main.c)

include(GNUInstallDirs)
install(TARGETS vk3te3
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
