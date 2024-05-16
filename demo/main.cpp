#include "../Decorator.cpp"
int main()
{
  ConcreteComponent *c = new ConcreteComponent;
  ConcreteDecoratorA *d1 = new ConcreteDecoratorA( c );
  ConcreteDecoratorB *d2 = new ConcreteDecoratorB( d1 );
  
  d2->operation();
  
  delete d2;
  delete d1;
  delete c;
  
  return 0;
}
