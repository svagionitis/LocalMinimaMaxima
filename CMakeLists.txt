cmake_minimum_required(VERSION 3.14)

project(LocalMinimaMaxima LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Enable the compile_commands.json
# See https://cmake.org/cmake/help/latest/variable/CMAKE_EXPORT_COMPILE_COMMANDS.html
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core)

add_executable(LocalMinimaMaxima
    LocalMinimaMaxima.h
    LocalMinimaMaxima.cpp
    main.cpp
)
target_link_libraries(LocalMinimaMaxima Qt${QT_VERSION_MAJOR}::Core)

include(GNUInstallDirs)
install(TARGETS LocalMinimaMaxima
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
