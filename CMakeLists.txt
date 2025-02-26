cmake_minimum_required(VERSION 3.10)
project(svg_project)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})

# Add include directory
include_directories(${PROJECT_SOURCE_DIR}/include)

# Add executables
add_executable(svg_program
    src/main_transform.cpp  # Add this line
    src/svg_utils.cpp
    src/geometry.cpp       # Add this line
)

add_executable(test_draw_transform_canvas 
    test/test_draw_transform_canvas.cpp
    src/geometry.cpp
    src/svg_utils.cpp
)

add_executable(test_draw_none_canvas 
    test/test_draw_none_canvas.cpp
    src/geometry.cpp
    src/svg_utils.cpp
)