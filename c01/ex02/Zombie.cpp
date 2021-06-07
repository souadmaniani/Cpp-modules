#include "Zombie.hpp"

Zombie::Zombie()
{
    std::cout << "Constrector called" << "\n";
}

Zombie::~Zombie()
{
    std::cout << "Destructor called" << "\n";
}

//parasite zombie
void Zombie::announce(void) const
{
    std::cout << "<name (type)> Braiiiiiiinnnssss..." << "\n";
    std::cout << "I am of type " << this->type << "\n";
    std::cout << "My name is " << this->name << "\n";
}