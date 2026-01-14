cmake_minimum_required(VERSION 4.2.1)

project(part6 VERSION 1.0.1)

configure_file(part6Config.h.in part6Config.h)

add_executable(${PROJECT_NAME} main.cpp)

option(USE_ADDER "Use adder library" ON)

if(USE_ADDER)
  add_subdirectory(Adder)
  list(APPEND EXTRA_INCLUDE_DIRS PUBLIC Adder)
  list(APPEND EXTRA_LINK_DIRS PUBLIC Adder)
  list(APPEND EXTRA_LINK_LIBS adder)
endif()

target_include_directories(
  ${PROJECT_NAME}
  PUBLIC ${CMAKE_CURRENT_BINARY_DIR}
  ${EXTRA_INCLUDE_DIRS}
)

target_link_directories(
  ${PROJECT_NAME}
  ${EXTRA_LINK_DIRS}
)

target_link_libraries(
  ${PROJECT_NAME}
  ${EXTRA_LINK_LIBS}
)

install(FILES ${CMAKE_CURRENT_BINARY_DIR}/part6Config.h DESTINATION lib)
install(TARGETS ${PROJECT_NAME} DESTINATION bin)
