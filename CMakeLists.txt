cmake_minimum_required(VERSION 3.13)

project(main)

add_executable(${PROJECT_NAME} main.cpp)

add_subdirectory(adder_folder)

add_subdirectory(external/glfw)

target_include_directories(${PROJECT_NAME} 
    PUBLIC adder_folder 
    PUBLIC external/glfw/include
)

target_link_directories(${PROJECT_NAME} 
    PUBLIC build/adder_folder
    PUBLIC build/external/glfw/src
)

target_link_libraries(${PROJECT_NAME} adder glfw)
