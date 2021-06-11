#include "Pony.hpp"
#include <iostream>

Pony::Pony(int age, float weight, float speed):
 age(age), weight(weight), speed(speed)
{
     std::cout << "\033[1;31mConstructor called\033[0m" << "\n";
}

Pony::~Pony()
{
     std::cout << "\033[1;31mDestructor called\033[0m" << "\n";
}

void Pony::eat(void)
{
    std::cout << "I eat Grass, Hay and grains!!" << "\n";
}

void Pony::drink(void)
{
    std::cout << "I drink Water!!" << "\n";
}

void Pony::run(void) const
{
    float speed;

    speed = getSpeed();
    std::cout << "My speed is " << speed << "\n";
}
void Pony::setAge(int age)
{
    this->age = age;
}

int Pony::getAge(void) const
{
    return (this->age);
}

void Pony::setWeight(float weight)
{
    this->weight = weight;
}

float Pony::getWeight(void) const
{
    return (this->weight);
}

void Pony::setSpeed(float speed)
{
    this->speed = speed;
}

float Pony::getSpeed(void) const
{
    return (this->speed);
}

