#include <iostream>

class SubsystemA
{
public:
  void suboperation() { std::cout << "Subsystem A method" << std::endl; }
};

class SubsystemB
{
public:
  void suboperation() { std::cout << "Subsystem B method" << std::endl; }
};

class SubsystemC
{
public:
  void suboperation() { std::cout << "Subsystem C method" << std::endl; }
};

class Facade
{
public:
  Facade() : subsystemA(new SubsystemA()), subsystemB(new SubsystemB()), subsystemC(new SubsystemC()) {}
  ~Facade()
  {
    delete subsystemA;
    delete subsystemB;
    delete subsystemC;
  }

  void operation1()
  {
    subsystemA->suboperation();
    subsystemB->suboperation();
  }

  void operation2()
  {
    subsystemC->suboperation();
  }

private:
  SubsystemA *subsystemA;
  SubsystemB *subsystemB;
  SubsystemC *subsystemC;
};


void testOperation1()
{
  std::cout << "Running Operation 1 test..." << std::endl;
  Facade facade;
  facade.operation1(); 
  std::cout << "Operation 1 test completed" << std::endl;
}

void testOperation2()
{
  std::cout << "Running Operation 2 test..." << std::endl;
  Facade facade;
  facade.operation2(); 
  std::cout << "Operation 2 test completed" << std::endl;
}
void testCombinedOperations()
{
  std::cout << "Running Combined Operations test..." << std::endl;
  Facade facade;
  facade.operation1(); 
  facade.operation2(); 
  std::cout << "Combined Operations test completed" << std::endl;
}

// Функция для запуска всех тестов
void runTests()
{
  testOperation1();
  testOperation2();
  testCombinedOperations(); }


int main()
{
  runTests(); 
  return 0;
}
