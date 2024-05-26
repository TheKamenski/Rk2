#include <iostream>


#include <cassert>
#include <sstream>

// Функция для тестирования ConcreteComponent
void testConcreteComponent() {
  std::stringstream buffer;
  std::streambuf *prevcoutbuf = std::cout.rdbuf(buffer.rdbuf());

  ConcreteComponent comp;
  comp.operation();

  std::string output = buffer.str();
  assert(output == "Concrete Component operation\n");

  std::cout.rdbuf(prevcoutbuf); // Восстановление стандартного вывода
}

// Функция для тестирования ConcreteDecoratorA
void testConcreteDecoratorA() {
  std::stringstream buffer;
  std::streambuf *prevcoutbuf = std::cout.rdbuf(buffer.rdbuf());

  ConcreteComponent comp;
  ConcreteDecoratorA decA(&comp);
  decA.operation();

  std::string output = buffer.str();
  assert(output == "Concrete Component operation\nDecorator A\n");

  std::cout.rdbuf(prevcoutbuf); // Восстановление ст


// Функция для запуска всех тестов
void runTests()
{
  testConcreteComponent()
  testConcreteDecoratorA()
  }

int main()
{
  runTests(); 
  return 0;
}
