cmake_minimum_required(VERSION 4.2.1)

project(part5 VERSION 1.0.1)

configure_file(part5Config.h.in part5Config.h)

add_executable(${PROJECT_NAME} main.cpp)

option(USE_ADDER "Use custom Adder library" ON)

if(USE_ADDER)
  add_subdirectory(Adder)
  list(APPEND EXTRA_INCLUDE_DIRS PRIVATE Adder)
  list(APPEND EXTRA_LINK_DIRS PUBLIC Adder)
  list(APPEND EXTRA_LINK_LIBS Adder)
endif()

target_include_directories(
  ${PROJECT_NAME} PRIVATE ${CMAKE_BINARY_DIR}
  ${EXTRA_INCLUDE_DIRS}
)

target_link_directories(
  ${PROJECT_NAME} ${EXTRA_LINK_DIRS}
)

target_link_libraries(
  ${PROJECT_NAME} ${EXTRA_LINK_LIBS}
)

set_target_properties(${PROJECT_NAME} PROPERTIES PUBLIC_HEADER ${CMAKE_BINARY_DIR}/part5Config.h)
install(TARGETS ${PROJECT_NAME} LIBRARY DESTINATION bin PUBLIC_HEADER DESTINATION lib)
