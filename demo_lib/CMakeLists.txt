add_library(demo_lib SHARED
    src/demo.cpp
    )

target_include_directories(demo_lib
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include
    )

target_link_libraries(demo_lib
    PRIVATE Qt5::Widgets
    )
