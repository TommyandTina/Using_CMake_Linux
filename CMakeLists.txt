cmake_minimum_required(VERSION 3.13)

project(MAIN VERSION 1.0.0)

add_executable(${PROJECT_NAME} main.cpp) #tạo executable

option(USE_ADDER "Use adder" ON) #tạo option cho cmakedefine
if(USE_ADDER)
    add_subdirectory(adder_folder) #thêm subfolder chứa CMakeLists.txt
    target_include_directories(${PROJECT_NAME} 
    PUBLIC adder_folder
) #thêm vào để khỏi cần chỉ định chính xác header của library

target_link_directories(${PROJECT_NAME} 
    PUBLIC build/adder_folder
) #nếu có sẵn file .a/.so thì thêm path vào đây (nếu đã install library thì ko cần dòng này)
endif()

configure_file(MAINconfig.h.in MAINconfig.h) #tạo file config với cmakedefine (undef nếu option = OFF/FALSE)

target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_BINARY_DIR})


add_subdirectory(external/glfw)

target_include_directories(${PROJECT_NAME} 
    PUBLIC external/glfw/include
)

target_link_directories(${PROJECT_NAME} 
    PUBLIC build/external/glfw/src
)

target_link_libraries(${PROJECT_NAME} adder glfw)