cmake_minimum_required(VERSION 3.5)

project(vk3th2 LANGUAGES C)

add_executable(vk3th2 main.c)

include(GNUInstallDirs)
install(TARGETS vk3th2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
