#include <iostream>
#include "Sample.class.hpp"

void f0(void)
{
    Sample instance;
    std::cout << "number of instances:"<< Sample::getCont() << "\n";

}
void f1(void)
{
    Sample instance;
    std::cout << "number of instances:"<< Sample::getCont() << "\n";
    f0();
}


int main(void)
{
    // Sample instance('s', 3.14);
    // Sample instance2('s', 9.17);
    // instance.setVar(9);
    // instance2.setVar(8);
    // std::cout << instance.compare(&instance2) << "\n";
    // std::cout << "number of instances:"<< Sample::getCont() << "\n";
    // f1();
    // std::cout << "number of instances:"<< Sample::getCont() << "\n";

    Sample instance1;
    Sample *instp;
    instp = &instance1;

    int Sample::*p = NULL;
    p = &Sample::c;
    instance1.*p = 42;
    std::cout << instance1.c << "\n";
    instp->*p = 13;
    std::cout << instance1.c << "\n";

    void (Sample::*f)(void) const;
    f = &Sample::bar();
    (instance1.*f)();
    return 0;
}