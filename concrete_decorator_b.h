#ifndef CONCRETE_DECORATOR_B_H_
#define CONCRETE_DECORATOR_B_H_

#include "decorator.h"

class ConcreteDecoratorB : public Decorator {
 public:
  ConcreteDecoratorB(Component* component) : Decorator(component) {}
  
  std::string Operation() const override {
    return "ConcreteDecoratorB(" + Decorator::Operation() + ")";
  }
};

#endif // CONCRETE_DECORATOR_B_H_
