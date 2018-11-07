cmake_minimum_required(VERSION 3.0.0)
project(cmake_demo)

find_package(Qt5 REQUIRED COMPONENTS
    Widgets
    )

add_subdirectory(demo_lib)
add_subdirectory(src)
