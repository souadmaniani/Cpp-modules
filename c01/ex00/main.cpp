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
    std::cout << "Apply Function On the heap" << "\n";
    ponyOnTheHeap();
    std::cout << "Apply Function On the stack" << "\n";
    ponyOnTheStack();
    std::cout << "The end" << "\n";
    return (0);
}
