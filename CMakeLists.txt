cmake_minimum_required(VERSION 3.13)

project(main)

add_executable(${PROJECT_NAME} main.cpp)

add_subdirectory(adder_folder)

target_include_directories(${PROJECT_NAME} PRIVATE adder_folder)

target_link_libraries(${PROJECT_NAME} adder)
