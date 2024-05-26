cmake_minimum_required(VERSION 3.10)

project(MyProject)

# Найдите и подключите библиотеку Catch2
find_package(Catch2 REQUIRED)

# Добавьте исполняемый файл для тестов
add_executable(tests test.cpp)

# Подключите библиотеку Catch2 к исполняемому файлу тестов
target_link_libraries(tests PRIVATE Catch2::Catch2)

# Добавьте тесты как цель для сборки
enable_testing()

set(Catch2_DIR ~/Catch2)
# Добавьте тесты в CMake
add_test(NAME MyTest COMMAND test)
add_executable(MyProject builder.cpp)

if(BUILD_TESTS)
  enable_testing()
  add_subdirectory(third-party/gtest)
  file(GLOB ${Project}_TEST_SOURCES tests/*.cpp)
  add_executable(check ${${Project}_TEST_SOURCES})
  target_link_libraries(check ${Project} gtest_main)
  add_test(NAME check COMMAND check)
endif()

