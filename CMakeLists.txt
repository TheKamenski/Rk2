cmake_minimum_required(VERSION 3.10)
project(Decorator)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Decorator main.cpp)

add_library(Decorator Decorator.cpp)

target_link_libraries(Decorator Decorator)
