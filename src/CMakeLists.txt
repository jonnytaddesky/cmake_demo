add_executable(cmake_demo
    main.cpp
    )

target_link_libraries(cmake_demo
    PRIVATE Qt5::Widgets
    PRIVATE demo_lib
    )
