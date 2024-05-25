cmake_minimum_required(VERSION3.10)
project(decorator_pattern)

set(CMAKE_CXX_STANDARD14)

add_executable(decorator main.cpp)

add_executable(decorator main.cpp)
add_executable(decorator_test tests/decorator_test.cpp)
target_link_libraries(decorator_test gtest)

