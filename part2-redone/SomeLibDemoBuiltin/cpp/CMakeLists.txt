cmake_minimum_required(VERSION 4.2.1)

project(mearlymath)

add_library(${PROJECT_NAME} adder.cpp)

set_target_properties(mearlymath PROPERTIES PUBLIC_HEADER adder.h)

install(TARGETS mearlymath LIBRARY DESTINATION lib PUBLIC_HEADER DESTINATION include)
