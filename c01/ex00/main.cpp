#include "Pony.hpp"
#include <iostream>

void ponyOnTheHeap(void)
{
    Pony *instance = new Pony(1, 100, 60);
    instance->eat();
    instance->drink();
    instance->run();
    delete instance;
}
void ponyOnTheStack(void)
{
    Pony instance(1, 100, 60);
    instance.eat();
    instance.drink();
    instance.run();
}

int main(void)
{
    std::cout << "Apply Function On the heap" << std::endl;
    ponyOnTheHeap();
    std::cout << "Apply Function On the stack" << std::endl;
    ponyOnTheStack();
    std::cout << "The end" << std::endl;
    return (0);
}