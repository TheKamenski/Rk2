#ifndef CONCRETE_DECORATOR_A_H_
#define CONCRETE_DECORATOR_A_H_

#include "decorator.h"

class ConcreteDecoratorA : public Decorator {
 public:
  ConcreteDecoratorA(Component* component) : Decorator(component) {}
  
  std::string Operation() const override {
    return "ConcreteDecoratorA(" + Decorator::Operation() + ")";
  }
};

#endif // CONCRETE_DECORATOR_A_H_
