cmake_minimum_required(VERSION 3.5)

project(VKTH3TH1 LANGUAGES C)

add_executable(VKTH3TH1 main.c)

include(GNUInstallDirs)
install(TARGETS VKTH3TH1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
