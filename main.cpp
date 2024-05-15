int main()
{
  ConcreteComponent  *cc = new ConcreteComponent();
  ConcreteDecoratorB *db = new ConcreteDecoratorB( cc );
  ConcreteDecoratorA *da = new ConcreteDecoratorA( db );
  
  Component *component = da;
  component->operation();
  
  delete da;
  delete db;
  delete cc;
  
  return 0;
}
