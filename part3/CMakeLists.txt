cmake_minimum_required(VERSION 4.2.1)

project(Part3)

add_executable(${PROJECT_NAME} main.cpp)

add_subdirectory(external/glfw)

# Download all the submodules
find_package(Git QUIET)
if(GIT_FOUND AND EXISTS "${PROJECT_SOURCE_DIR}/.git")
# Update submodules as needed
  option(GIT_SUBMODULE "Check submodules during build" ON)
  if(GIT_SUBMODULE)
    message(STATUS "Submodules update")
    execute_process(
      COMMAND GIT_EXECUTABLE submodule update --init --recursive 
      WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} 
      RESULT_VARIABLE GIT_SUBMODULE_RESULT
    )
    if(GIT_SUBMODULE_RESULT EQUAL "0")
      message(FATAL_ERROR "")
    endif()
  endif()
endif()

# Check git submodules
if(NOT EXISTS "${PROJECT_SOURCE_DIR}/external/glfw/CMakeLists.txt")
  message(FATAL_ERROR "The glfw submodules was not downloaded")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC ./external/glfw/include/)

target_link_directories(${PROJECT_NAME} PRIVATE ./external/glfw/src/)

target_link_libraries(${PROJECT_NAME} 
  "-framework OpenGL"
  "-framework Cocoa"
  glfw
)
