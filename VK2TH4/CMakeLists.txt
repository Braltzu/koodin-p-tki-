cmake_minimum_required(VERSION 3.5)

project(VK2TH4 LANGUAGES C)

add_executable(VK2TH4 main.c)

include(GNUInstallDirs)
install(TARGETS VK2TH4
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
