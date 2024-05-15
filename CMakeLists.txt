cmake_minimum_required(VERSION 3.10)

project(DecoratorTest)

# Настройка C++11
set(CMAKE_CXX_STANDARD 11)

# Нахождение Google Test
find_package(GTest REQUIRED PATHS /home/konstantin/Rk2/third-party/gtest)
include_directories(${GTEST_INCLUDE_DIRS})

# Создание исполняемого файла для тестов
add_executable(tests 
    tests/test_decorator.cpp  # Замените на ваши файлы с тестами
)

# Линковка с Google Test
target_link_libraries(tests ${GTEST_LIBRARIES} pthread)

# Добавление тестов 
enable_testing()
add_test(NAME AllTests COMMAND tests)


