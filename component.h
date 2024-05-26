#ifndef COMPONENT_H_
#define COMPONENT_H_

#include <string>

class Component {
 public:
  virtual ~Component() {}
  virtual std::string Operation() const = 0;
};

#endif // COMPONENT_H_
