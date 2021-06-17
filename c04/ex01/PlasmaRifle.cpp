#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(void)
{
    this->name = "Plasma Rifle";
    this->damage = 21;
    this->APCost = 5;
}
PlasmaRifle::PlasmaRifle(PlasmaRifle const & src)
{
    *this = src;
}
PlasmaRifle & PlasmaRifle::operator=(PlasmaRifle const & rhs)
{
    this->name = rhs.name;
    this->damage = rhs.damage;
    this->APCost = APCost;
    return *this;
}
PlasmaRifle::~PlasmaRifle()
{
}

void AWeapon::attack() const
{
    std::cout << "* piouuu piouuu piouuu *\n";
}