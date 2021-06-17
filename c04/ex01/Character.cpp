#include "Character.hpp"

Character::Character()
{}
Character::Character(std::string const & name)
{
    this->name = name;
    this->AP = 40;

}
Character::~Character()
{

}
Character::Character(Character const & src)
{
    *this = src;
}
Character & Character::operator=(Character const & rhs)
{
    this->name = rhs.name;
    return (*this);
}

std::string const & Character::getName() const
{
    return (this->name);
}
int Character::getAP() const
{
    return (AP);
}
AWeapon *Character::getAWeapon() const
{
    return (this->weapon);
}
void Character::recoverAP()
{
    if (AP < 40)
        AP+=10;
}
void Character::equip(AWeapon* weapon)
{
    this->weapon = weapon;
}
void Character::attack(Enemy* enemy)
{
    // If there’s no equipped weapon, attack() doesn’t do a thing. You’ll then substract
    // to the enemy’s HP the damage value of the weapon. After that, if the target has 0
    // HP, you must delete it.
    std::cout << this->name << " attacks ";
    std::cout << enemy->getType() << " with a ";
    std::cout << this->weapon->getName() << "\n";
}
std::ostream & operator<<(std::ostream & o, Character const & rhs)
{
    o << rhs.getName() << " has " << rhs.getAP() << " AP ";
    o << "and wields a " << rhs.getAWeapon()->getName() << "\n";
    return o;
}