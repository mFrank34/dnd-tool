cmake_minimum_required(VERSION 3.20)
project(dnd-tool VERSION 0.1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(GLOB_RECURSE SOURCES src/*.cpp)

add_executable(dnd-tool ${SOURCES})

target_include_directories(dnd-tool PRIVATE include)

