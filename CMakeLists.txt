# CMakeLists.txt

cmake_minimum_required(VERSION 3.10)

# Название проекта
project(DecoratorPattern)

# Установить стандарт C++
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Добавить исходные файлы
add_executable(DecoratorPattern main.cpp)

 #Добавить тесты
#enable_testing()
#include_directories(${GTEST_INCLUDE_DIRS})

#add_executable(DecoratorPatternTest tests/test_decorator.cpp)
#target_link_libraries(DecoratorPatternTest ${GTEST_LIBRARIES} pthread)

#add_test(NAME DecoratorPatternTest COMMAND DecoratorPatternTest)
