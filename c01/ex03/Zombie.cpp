#include "Zombie.hpp"
Zombie::Zombie()
{
}

Zombie::Zombie(std::string type, std::string name): type(type), name(name)
{
    std::cout << "\033[1;31mConstructor called for Zombie\033[0m" << "\n";
}

Zombie::~Zombie()
{
    std::cout << "\033[1;31mDestructor called for Zombie\033[0m" << "\n";
}

void Zombie::setType(std::string type)
{
    this->type = type;
}

std::string Zombie::getType(void) const
{
    return (this->type);
}

void Zombie::setName(std::string name)
{
    this->name = name;
}

std::string Zombie::getName(void) const
{
    return (this->name);
}

void Zombie::announce(void) const
{
    std::cout << "----------------------------------" << "\n";
    std::cout << "Iam a zombie, my name is " << getName() << "\n";
    std::cout << "Iam of type " << getType() << "\n";
    std::cout << "----------------------------------" << "\n";
}
