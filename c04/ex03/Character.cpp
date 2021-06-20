#include "Character.hpp"
Character::Character()
{
}
Character::Character(std::string name)
{
	int i;

	i = 0;
    this->name = name;
	this->inventory = new AMateria*[4];
	while (i < 4)
		inventory[i] =  NULL;
}
Character::~Character()
{
	int i;

	i = -1;
		while (++i < 4)
	{
		if (inventory[i])
		{
			delete inventory[i];
			inventory[i] = NULL;
		}
	}
	if (inventory)
		delete [] inventory;
}

Character::Character(Character const & src)
{
    *this = src;
}
Character & Character::operator=(Character const & rhs)
{
	int i;

	i = -1;
	// delete old Inventory
	while (++i < 4)
	{
		if (inventory[i])
		{
			delete inventory[i];
			inventory[i] = NULL;
		}
	}
	delete [] inventory;
	// copy the new ones
	i = -1;
	inventory = new AMateria*[4];
	while (++i < 4)
		inventory[i] = rhs.inventory[i]->clone();
}

std::string const & Character::getName() const
{
    return (this->name);
}
void Character::equip(AMateria* m)
{
    //can not equip a Materia in a full inventory
}
void Character::unequip(int idx)
{
    // can not unequip a nonexestent Materia
    // must NOT delete Materia!
}
void Character::use(int idx, ICharacter& target)
{
	// can not use a nonexestent Materia

}
// AMateria* Character::getInventory(void) const
// {
// 	return (this->inventory[4]);
// }

// void setInventory(AMateria *inventory[4])
// {
	
// }