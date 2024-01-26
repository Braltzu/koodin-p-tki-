cmake_minimum_required(VERSION 3.5)

project(uusikantakorkeus LANGUAGES C)

add_executable(uusikantakorkeus main.c)

include(GNUInstallDirs)
install(TARGETS uusikantakorkeus
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
