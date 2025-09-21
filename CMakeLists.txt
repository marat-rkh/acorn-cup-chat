cmake_minimum_required(VERSION 3.30)

project(acorn-cup-chat)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_subdirectory(libs/portaudio EXCLUDE_FROM_ALL)

add_executable(acorn-cup-chat main.cpp)