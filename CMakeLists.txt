cmake_minimum_required(VERSION 3.14)

project(LocalMinimaMaxima LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Enable the compile_commands.json
# See https://cmake.org/cmake/help/latest/variable/CMAKE_EXPORT_COMPILE_COMMANDS.html
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_executable(LocalMinimaMaxima
    LocalMinimaMaxima.h
    LocalMinimaMaxima.cpp
    main.cpp
)
target_link_libraries(LocalMinimaMaxima)

include(GNUInstallDirs)
install(TARGETS LocalMinimaMaxima
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
