#include <iostream>
#include "Sample.class.hpp"

Sample::Sample(){
    std::cout <<"Constructor called"<<std::endl;
    Sample::cont+=1;

    this->foo = 1337;
    std::cout << this->foo <<std::endl;
    std::cout << this->a1 <<std::endl;
    this->bar();
    return;
}
Sample::~Sample(void){
    std::cout <<"Destructor called"<<std::endl;
    Sample::cont-=1;
    return;
}
int Sample::getCont(void)
{
    return Sample::cont;
}

int Sample::cont = 0;
void Sample::bar(void)
{
    std::cout << "Member function called" << std::endl;
    return;
}
int Sample::compare(Sample *other)
{
    if (this->var < other->var)
        return -1;
    if (this->var > other->var)
        return 1;
    return 0;
}
void Sample::setVar(int v1)
{
    this->var = v1;
}
int Sample::getVar(void) const
{
    return this->var;
}
