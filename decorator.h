#ifndef DECORATOR_H_
#define DECORATOR_H_

#include "component.h"

class Decorator : public Component {
 protected:
  Component* component_;
 public:
  Decorator(Component* component) : component_(component) {}
  
  std::string Operation() const override {
    return this->component_->Operation();
  }
};

#endif // DECORATOR_H_
