# CMakeLists.txt

cmake_minimum_required(VERSION 3.10)

# Название проекта
project(FacadePattern)

# Установить стандарт C++
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Добавить исходные файлы
add_executable(FacadePattern src/main.cpp)

# Добавить тесты
enable_testing()
include_directories(${GTEST_INCLUDE_DIRS})

add_executable(FacadePatternTest tests/test_facade.cpp)
target_link_libraries(FacadePatternTest ${GTEST_LIBRARIES} pthread)

add_test(NAME FacadePatternTest COMMAND FacadePatternTest)
