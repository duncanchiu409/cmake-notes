cmake_minimum_required(VERSION 4.2.1)

project(trim)

add_executable(${PROJECT_NAME} main.cpp)

install(TARGETS ${PROJECT_NAME} DESTINATION bin)
