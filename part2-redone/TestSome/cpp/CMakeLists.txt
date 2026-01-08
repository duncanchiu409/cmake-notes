cmake_minimum_required(VERSION 4.2.1)

project(TestSome)

add_executable(${PROJECT_NAME} main.cpp)

target_link_directories(${PROJECT_NAME} PRIVATE ${CMAKE_SOURCE_DIR}/../../SomeLibDemo/cpp/build)

target_link_libraries(${PROJECT_NAME} mearlymath)

