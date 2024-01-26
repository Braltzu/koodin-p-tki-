cmake_minimum_required(VERSION 3.5)

project(testifrfrefr LANGUAGES C)

add_executable(testifrfrefr main.c)

include(GNUInstallDirs)
install(TARGETS testifrfrefr
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
