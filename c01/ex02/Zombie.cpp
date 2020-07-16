#include "Zombie.hpp"

Zombie::Zombie()
{
    std::cout << "Constrector called" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "Destructor called" << std::endl;
}

//parasite zombie
void Zombie::announce(void) const
{
    std::cout << "<name (type)> Braiiiiiiinnnssss..." << std::endl;
    std::cout << "I am of type " << this->type << std::endl;
    std::cout << "My name is " << this->name << std::endl;
}