#include "Base.hpp"

int main()
{
    Base base = Base();
    Base *test;
    A a = A();
    B b = B();
    C c = C();
    identify(c);
    identify(b);
    identify(a);
    test = base.generate();
    identify(*test);
}