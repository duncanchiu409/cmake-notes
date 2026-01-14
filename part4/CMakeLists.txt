cmake_minimum_required(VERSION 4.2.1)

project(part4 VERSION 1.0)

configure_file(part4Config.h.in part4Config.h)

add_executable(${PROJECT_NAME} main.cpp)

target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_BINARY_DIR})
