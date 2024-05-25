#include <iostream>
#include <cassert>
#include <sstream>

// Предыдущий код классов остается без изменений

// Тестовая функция для проверки ConcreteComponent
void test_concrete_component() {
    ConcreteComponent cc;
    std::stringstream ss;
    std::streambuf* oldCoutBuffer = std::cout.rdbuf(ss.rdbuf());

    cc.operation();

    std::cout.rdbuf(oldCoutBuffer);
    assert(ss.str() == "Concrete Component operation\n");
}

// Тестовая функция для проверки ConcreteDecoratorA
void test_concrete_decorator_a() {
    ConcreteComponent cc;
    ConcreteDecoratorA da(&cc);
    std::stringstream ss;
    std::streambuf* oldCoutBuffer = std::cout.rdbuf(ss.rdbuf());

    da.operation();

    std::cout.rdbuf(oldCoutBuffer);
    assert(ss.str() == "Concrete Component operation\nDecorator A\n");
}

// Тестовая функция для проверки ConcreteDecoratorB
void test_concrete_decorator_b() {
    ConcreteComponent cc;
    ConcreteDecoratorB db(&cc);
    std::stringstream ss;
    std::streambuf* oldCoutBuffer = std::cout.rdbuf(ss.rdbuf());

    db.operation();

    std::cout.rdbuf(oldCoutBuffer);
    assert(ss.str() == "Concrete Component operation\nDecorator B\n");
}

int main() {
    test_concrete_component();
    test_concrete_decorator_a();
    test_concrete_decorator_b();

    std::cout << "All tests passed!" << std::endl;
    return0;
}

