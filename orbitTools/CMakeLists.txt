cmake_minimum_required(VERSION 3.5)

project("orbitTools")

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR})
set(PROJECT_LIB_NAME orbitTools)

file(GLOB_RECURSE all_headers ${CMAKE_CURRENT_LIST_DIR}/*.h)
file(GLOB_RECURSE all_sources ${CMAKE_CURRENT_LIST_DIR}/*.cpp)

add_library(${PROJECT_LIB_NAME} STATIC ${all_headers};${all_sources})

target_include_directories(${PROJECT_LIB_NAME}
  PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}/core
)