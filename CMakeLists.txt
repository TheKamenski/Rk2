cmake_minimum_required(VERSION 3.10)

project(DecoratorTest)

# Настройка C++11
set(CMAKE_CXX_STANDARD 11)

# Нахождение Google Test
find_package(GTest REQUIRED PATHS /home/konstantin/Rk2/third-party/gtest)
include_directories(${GTEST_INCLUDE_DIRS})


add_executable(tests 
    tests/test_decorator.cpp  # Замените на ваши файлы с тестами
)

# Линковка с Google Test
target_link_libraries(tests ${GTEST_LIBRARIES} pthread)

# Добавление тестов 
enable_testing()
add_test(NAME AllTests COMMAND tests)

if(NOT CMAKE_TOOLCHAIN_FILE)
  set(CMAKE_TOOLCHAIN_FILE
      "${CMAKE_CURRENT_LIST_DIR}/home/Konstantin/Rk2/vcpkg.cmake"
      CACHE STRING "" FORCE)
endif()

project(my-project CXX)

set(GTEST_ROOT "/home/konstantin/Rk2/third-party/gtest" CACHE PATH "Path to googletest")
find_package(GTest REQUIRED)

include(FetchContent)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG release-1.12.1
)
FetchContent_GetProperties(googletest)
if(NOT googletest_POPULATED)
  FetchContent_Populate(googletest)
  add_subdirectory(${googletest_SOURCE_DIR} ${googletest_BINARY_DIR} EXCLUDE_FROM_ALL)
endif()

# Ссылка на GTest
target_link_libraries(your_target gtest_main gtest)

