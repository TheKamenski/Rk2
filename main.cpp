#include <iostream>
#include <cassert>
#include "component.h"
#include "concrete_component.h"
#include "decorator.h"
#include "concrete_decorator_a.h"
#include "concrete_decorator_b.h"

void TestConcreteComponent() {
  Component* simple = new ConcreteComponent();
  std::string result = simple->Operation();
  std::cout << "TestConcreteComponent: " << result << std::endl;
  assert(result == "ConcreteComponent");
  delete simple;
}

void TestConcreteDecoratorA() {
  Component* simple = new ConcreteComponent();
  Component* decoratorA = new ConcreteDecoratorA(simple);
  std::string result = decoratorA->Operation();
  std::cout << "TestConcreteDecoratorA: " << result << std::endl;
  assert(result == "ConcreteDecoratorA(ConcreteComponent)");
  delete decoratorA;
  delete simple;
}

void TestConcreteDecoratorB() {
  Component* simple = new ConcreteComponent();
  Component* decoratorA = new ConcreteDecoratorA(simple);
  Component* decoratorB = new ConcreteDecoratorB(decoratorA);
  std::string result = decoratorB->Operation();
  std::cout << "TestConcreteDecoratorB: " << result << std::endl;
  assert(result == "ConcreteDecoratorB(ConcreteDecoratorA(ConcreteComponent))");
  delete decoratorB;
  delete decoratorA;
  delete simple;
}

int main() {
  TestConcreteComponent();
  TestConcreteDecoratorA();
  TestConcreteDecoratorB();
  std::cout << "All tests passed!" << std::endl;
  return 0;
}
