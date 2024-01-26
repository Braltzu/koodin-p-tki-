cmake_minimum_required(VERSION 3.5)

project(vk3te1 LANGUAGES C)

add_executable(vk3te1 main.c)

include(GNUInstallDirs)
install(TARGETS vk3te1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
