cmake_minimum_required(VERSION 3.5)

project(kopiovk3th1 LANGUAGES C)

add_executable(kopiovk3th1 main.c)

include(GNUInstallDirs)
install(TARGETS kopiovk3th1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
