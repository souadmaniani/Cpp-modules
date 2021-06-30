#include "Base.hpp"

int main()
{
    Base base = Base();
    Base *test;
    A a = A();
    B b = B();
    C *c = new C();
    identify(a);
    identify(b);
    identify(c);
    test = base.generate();
    identify(*test);
    identify(test);
    delete c;
}