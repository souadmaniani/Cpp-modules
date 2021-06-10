#include "HumanA.hpp"


HumanA::HumanA(std::string name, Weapon &weapon) : weapon(weapon)
{
    this->name = name;
}
HumanA::~HumanA()
{
    // std::cout << "Deconstructor for HumanA" << "\n";
}

std::string HumanA::getName(void)
{
    return (this->name);
}

Weapon &HumanA::getWeapon(void) const
{
    return (this->weapon);
}

void HumanA::attack(void)
{
    std::cout << this->getName() << " attacks with his ";
    std::cout << this->getWeapon().getType() << "\n";
}
