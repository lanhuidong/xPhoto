cmake_minimum_required(VERSION 3.26)

project(xPhoto VERSION 0.0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

list(APPEND CMAKE_PREFIX_PATH "/Users/lanhuidong/Qt")

find_package(Qt6 REQUIRED COMPONENTS Widgets Gui)
qt_standard_project_setup()

add_subdirectory(src/app)