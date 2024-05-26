#include "gtest/gtest.h"
#include <sstream>
#include <string>

#include "builder.cpp" //  Подключите ваш заголовочный файл с классами

// Тест для ConcreteComponent
TEST(DecoratorTest, ConcreteComponentOperation) {
  ConcreteComponent component;
  std::stringstream ss;
  std::streambuf * oldCout = std::cout.rdbuf();
  std::cout.rdbuf(ss.rdbuf());

  component.operation();

  std::cout.rdbuf(oldCout);
  EXPECT_EQ(ss.str(), "Concrete Component operation\n");
}

// Тест для ConcreteDecoratorA
TEST(DecoratorTest, ConcreteDecoratorAOperation) {
  ConcreteComponent component;
  ConcreteDecoratorA decoratorA(&component);
  std::stringstream ss;
  std::streambuf * oldCout = std::cout.rdbuf();
  std::cout.rdbuf(ss.rdbuf());

  decoratorA.operation();

  std::cout.rdbuf(oldCout);
  EXPECT_EQ(ss.str(), "Concrete Component operation\nDecorator A\n");
}

// Тест для ConcreteDecoratorB
TEST(DecoratorTest, ConcreteDecoratorBOperation) {
  ConcreteComponent component;
  ConcreteDecoratorB decoratorB(&component);
  std::stringstream ss;
  std::streambuf * oldCout = std::cout.rdbuf();
  std::cout.rdbuf(ss.rdbuf());

  decoratorB.operation();

  std::cout.rdbuf(oldCout);
  EXPECT_EQ(ss.str(), "Concrete Component operation\nDecorator B\n");
}

