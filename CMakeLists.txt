cmake_minimum_required(VERSION 3.0.0)
project(cmake_demo)

find_package(Qt5 REQUIRED COMPONENTS
    Widgets
    )

add_executable(cmake_demo
    demo.cpp
    main.cpp
    )

target_link_libraries(cmake_demo
    PRIVATE Qt5::Widgets
    )
