cmake_minimum_required(VERSION 3.10)
project(MyDecorator)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(MyDecorator main.cpp)

add_library(Decorator Decorator.cpp)

target_link_libraries(MyDecorator Decorator)
