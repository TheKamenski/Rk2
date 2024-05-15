#include "gtest/gtest.h"
#include "ConcreteComponent.h"
#include "ConcreteDecoratorA.h"
#include "ConcreteDecoratorB.h"

TEST(DecoratorTest, ConcreteComponentOperation) {
  ConcreteComponent component;
  EXPECT_EQ(component.Operation(), "ConcreteComponent");
}

TEST(DecoratorTest, ConcreteDecoratorAOperation) {
  ConcreteComponent component;
  ConcreteDecoratorA decoratorA(&component);
  EXPECT_EQ(decoratorA.Operation(), "ConcreteDecoratorA(ConcreteComponent)");
}

TEST(DecoratorTest, ConcreteDecoratorBOperation) {
  ConcreteComponent component;
  ConcreteDecoratorB decoratorB(&component);
  EXPECT_EQ(decoratorB.Operation(), "ConcreteDecoratorB(ConcreteComponent)");
}
