#include "AWeapon.hpp"

AWeapon::AWeapon(void)
{

}
AWeapon::~AWeapon(void)
{

}
AWeapon::AWeapon(AWeapon const & src)
{
    *this = src;
}
AWeapon & AWeapon::operator=(AWeapon const & rhs)
{
    name = rhs.name;
    damage = rhs.damage;
    APCost = rhs.APCost;
    return (*this);
}
std::string const & AWeapon::getName() const
{
    return (this->name);
}
int AWeapon::getAPCost() const
{
    return (APCost);
}
int AWeapon::getDamage() const
{
    return(damage);
}
