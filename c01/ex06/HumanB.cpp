#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->name = &name;
}

HumanB::~HumanB()
{

}

std::string HumanB::getName(void)
{
    return (*this->name);
}

void HumanB::setName(std::string &name)
{
    this->name = &name;
}

Weapon &HumanB::getWeapon(void)
{
    return (*this->weapon);
}

void HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}

void HumanB::attack(void)
{
    std::cout << this->getName() << " attacks with his ";
    std::cout << this->getWeapon().getType() << "\n";
}
