#include "Weapon.hpp"
Weapon::Weapon()
{
    // std::cout << "Default constructor for weapon" << "\n";
}

Weapon::Weapon(std::string type) : type(type)
{
    // std::cout << "Constructor for weapon" << "\n";
}

Weapon::~Weapon()
{
    // std::cout << "Deconstructor for weapon" << "\n";
}

const std::string& Weapon::getType(void)
{
    return (this->type);
}

void Weapon::setType(std::string type)
{
    this->type = type;
}
