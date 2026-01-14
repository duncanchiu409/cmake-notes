cmake_minimum_required(VERSION 4.2.1)

project(Adder VERSION 1.0.1)

add_library(${PROJECT_NAME} adder.cpp adder.h)

set_target_properties(${PROJECT_NAME} PROPERTIES PUBLIC_HEADER adder.h)

install(TARGETS ${PROJECT_NAME} LIBRARY DESTINATION bin PUBLIC_HEADER DESTINATION lib)
