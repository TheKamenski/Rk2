#include "Decorator.cpp"
int main()
{
    Decorator *decorator = new Decorator();
    decorator->request();

    delete decorator;

    return 0;
}
