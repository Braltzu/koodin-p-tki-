cmake_minimum_required(VERSION 3.5)

project(vk3te4 LANGUAGES C)

add_executable(vk3te4 main.c)

include(GNUInstallDirs)
install(TARGETS vk3te4
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
