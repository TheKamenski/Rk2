cmake_minimum_required(VERSION 3.10)

# Устанавливаем имя проекта
project(MyProject)

# Устанавливаем исполняемый файл
add_executable(main main.cpp)

# Добавляем исполняемый файл для тестов
add_executable(tests test.cpp)

# Добавляем библиотеку для тестов
target_link_libraries(tests PRIVATE Catch2::Catch2)

# Добавляем тесты как цель для сборки
enable_testing()

# Добавляем тесты в CMake
add_test(NAME MyTest COMMAND tests)
