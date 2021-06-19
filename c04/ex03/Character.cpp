#include "Character.hpp"
Character::Character()
{
}
Character::Character(std::string name)
{
    this->name = name;
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

}
std::ostream & operator<<(std::ostream & o, Character const & rhs)
{
    o << rhs.getName();
    return o;
}

std::string const & Character::getName() const
{
    return (this->name);
}
void Character::equip(AMateria* m)
{

}
void Character::unequip(int idx)
{

}
void Character::use(int idx, ICharacter& target)
{

}