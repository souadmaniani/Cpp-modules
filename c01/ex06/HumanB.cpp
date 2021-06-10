#include "HumanB.hpp"

HumanB::HumanB(std::string name): name(name)
{

}
HumanB::~HumanB()
{

}

std::string HumanB::getName(void)
{
    return (this->name);
}

Weapon &HumanB::getWeapon(void)
{
    return (this->weapon);
}

void HumanB::setWeapon(Weapon weapon)
{
    this->weapon = weapon;
    std::cout << "set Weapn " << &weapon << "\n";
}

void HumanB::attack(void)
{
    std::cout << this->getName() << " attacks with his ";
    std::cout << this->getWeapon().getType() << "\n";
}
