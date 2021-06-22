#include "Character.hpp"

Character::Character()
{}
Character::Character(std::string const & name)
{
    this->name = name;
    this->AP = 40;
    this->weapon = NULL;
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
    this->AP = rhs.AP;
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
void Character::setAP(int ap)
{
    this->AP = ap;
}
AWeapon *Character::getAWeapon() const
{
    return (this->weapon);
}
void Character::recoverAP()
{
    if (AP + 10 >= 40)
        AP = 40;
    else
        AP+=10;
}
void Character::equip(AWeapon* weapon)
{
    this->weapon = weapon;
}
void Character::attack(Enemy* enemy)
{
    if (this->weapon && AP > 0 && enemy && enemy->getHP() > 0)
    {
        // Character loses AP
        if (this->AP - this->weapon->getAPCost() < 0)
            setAP(0);
        else
            setAP(this->AP - this->weapon->getAPCost());

        std::cout << this->name << " attacks ";
        std::cout << enemy->getType() << " with a ";
        std::cout << this->weapon->getName() << "\n";
        this->weapon->attack();
        // Enemy loses HP
        enemy->takeDamage(this->weapon->getDamage());
        if (enemy && enemy->getHP() == 0)
        {
            delete enemy;
            enemy = NULL;
        }
    }
}
std::ostream & operator<<(std::ostream & o, Character const & rhs)
{
    if(rhs.getAWeapon())
    {
        o << rhs.getName() << " has " << rhs.getAP() << " AP ";
        o << "and wields a " << rhs.getAWeapon()->getName() << "\n";
    }
    else
    {
        o << rhs.getName() << " has " << rhs.getAP() << " AP ";
        o << "and is unarmed\n";
    }
    return o;
}