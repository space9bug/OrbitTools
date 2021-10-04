cmake_minimum_required(VERSION 3.5)

project("orbitToolsDemo")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR})

add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/../orbitTools temp)

include_directories(${CMAKE_CURRENT_LIST_DIR}/../orbitTools/core)
include_directories(${CMAKE_CURRENT_LIST_DIR}/../orbitTools/orbit)

add_executable(${PROJECT_NAME} "main.cpp" "stdafx.cpp" "stdafx.h")

target_link_libraries(${PROJECT_NAME} "orbitTools")