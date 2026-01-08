cmake_minimum_required(VERSION 4.2.1)

project(TestSomeBuiltin)

add_executable(${PROJECT_NAME} main.cpp)

target_link_libraries(${PROJECT_NAME} mearlymath)
