#include "PowerFist.hpp"

PowerFist::PowerFist(void)
{
    this->name = "Power Fist";
    this->damage = 50;
    this->APCost = 8;
}
PowerFist::PowerFist(PowerFist const & src)
{
    *this = src;
}
PowerFist & PowerFist::operator=(PowerFist const & rhs)
{
    this->name = rhs.name;
    this->damage = rhs.damage;
    this->APCost = APCost;
    return *this;
}
PowerFist::~PowerFist()
{
}

void PowerFist::attack() const
{
    std::cout << "* pschhh... SBAM! *\n";
}
