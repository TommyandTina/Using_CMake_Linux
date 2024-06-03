cmake_minimum_required(VERSION 3.13)

project(MAIN VERSION 1.0.0)

add_executable(${PROJECT_NAME} main.cpp)

option(USE_ADDER "Use adder" ON)
if(USE_ADDER)
    add_subdirectory(adder_folder)
    target_include_directories(${PROJECT_NAME} 
    PUBLIC adder_folder)

target_link_directories(${PROJECT_NAME} 
    PUBLIC build/adder_folder)
endif()

configure_file(MAINconfig.h.in MAINconfig.h)



target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_BINARY_DIR})


add_subdirectory(external/glfw)

target_include_directories(${PROJECT_NAME} 
    PUBLIC external/glfw/include
)

target_link_directories(${PROJECT_NAME} 
    PUBLIC build/external/glfw/src
)

target_link_libraries(${PROJECT_NAME} adder glfw)