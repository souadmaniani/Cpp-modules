#include "Zombie.hpp"

Zombie::Zombie(std::string type, std::string name): type(type), name(name)
{
    std::cout << "Constrector called" << "\n";
}

Zombie::~Zombie()
{
    std::cout << "Destructor called" << "\n";
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
    this->type = name;
}

std::string Zombie::getName(void) const
{
    return (this->name);
}

void Zombie::announce(void) const
{
    std::cout << "Iam a zombie , my name is " << getName() << "\n";
    std::cout << "Iam of type " << getType() << "\n";
}
