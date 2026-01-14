cmake_minimum_required(VERSION 4.2.1)

project(adder VERSION 1.0.1)

add_library(${PROJECT_NAME} adder.cpp adder.h)

install(FILES adder.h DESTINATION lib)

install(TARGETS ${PROJECT_NAME} DESTINATION bin)
