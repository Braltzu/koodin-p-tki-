cmake_minimum_required(VERSION 3.5)

project(VK2TH5 LANGUAGES C)

add_executable(VK2TH5 main.c)

include(GNUInstallDirs)
install(TARGETS VK2TH5
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
