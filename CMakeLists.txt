cmake_minimum_required(VERSION 3.10)
project(Flyweight)

set(CMAKE_CXX_STANDARD 11)

add_executable(flyweight main.cpp ParticleFactory.cpp Particle.cpp)

target_link_libraries(flyweight gtest_main gtest)

enable_testing()
add_subdirectory(externals/googletest)

add_executable(flyweight_test ParticleFactory_test.cpp)
target_link_libraries(flyweight_test gtest_main gtest)
