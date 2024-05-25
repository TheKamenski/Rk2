#include "gtest/gtest.h"
#include "decorator.h" // Предполагается, что ваш код находится в файле decorator.h

// Тест для проверки работы ConcreteComponent
TEST(ConcreteComponentTest, Operation) {
    ConcreteComponent cc;
    testing::internal::CaptureStdout();
    cc.Operation();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "ConcreteComponent::Operation\n");
}

// Тест для проверки работы ConcreteDecoratorA
TEST(ConcreteDecoratorATest, Operation) {
    ConcreteComponent cc;
    ConcreteDecoratorA da(&cc);
    testing::internal::CaptureStdout();
    da.Operation();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "ConcreteComponent::Operation\nConcreteDecoratorA::Operation\n");
}

// Тест для проверки работы ConcreteDecoratorB
TEST(ConcreteDecoratorBTest, Operation) {
    ConcreteComponent cc;
    ConcreteDecoratorB db(&cc);
    testing::internal::CaptureStdout();
    db.Operation();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "ConcreteComponent::Operation\nConcreteDecoratorB::Operation\n");
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

