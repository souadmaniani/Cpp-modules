#include <iostream>
#include "Sample.class.hpp"

void f0(void)
{
    Sample instance;
    std::cout << "number of instances:"<< Sample::getCont() << std::endl;

}
void f1(void)
{
    Sample instance;
    std::cout << "number of instances:"<< Sample::getCont() << std::endl;
    f0();
}


int main(void)
{
    // Sample instance('s', 3.14);
    // Sample instance2('s', 9.17);
    // instance.setVar(9);
    // instance2.setVar(8);
    // std::cout << instance.compare(&instance2) << std::endl;
    // std::cout << "number of instances:"<< Sample::getCont() << std::endl;
    // f1();
    // std::cout << "number of instances:"<< Sample::getCont() << std::endl;

    Sample instance1;
    Sample *instp;
    instp = &instance1;

    int Sample::*p = NULL;
    p = &Sample::c;
    instance1.*p = 42;
    std::cout << instance1.c << std::endl;
    instp->*p = 13;
    std::cout << instance1.c << std::endl;

    void (Sample::*f)(void) const;
    f = &Sample::bar();
    (instance1.*f)();
    return 0;
}