#ifndef CONCRETE_COMPONENT_H_
#define CONCRETE_COMPONENT_H_

#include "component.h"

class ConcreteComponent : public Component {
 public:
  std::string Operation() const override {
    return "ConcreteComponent";
  }
};

#endif // CONCRETE_COMPONENT_H_
