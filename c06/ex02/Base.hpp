#ifndef BASE_H
#define BASE_H
#include <iostream>
class Base
{
public:
    virtual ~Base();
    Base * generate(void);
};
class A : public Base{};
class B : public Base{};
class C : public Base{};
void identify(Base& p);
#endif
