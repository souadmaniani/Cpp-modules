#include "Character.hpp"

Character::Character()
{
}
Character::Character(std::string name)
{
	int i;

	i = -1;
    this->name = name;
	this->inventory = new AMateria*[4];
	while (++i < 4)
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
	std::cout << "Character: copy constructor\n";
    *this = src;
}

Character & Character::operator=(Character const & rhs)
{
	std::cout << "Character: assignation operator\n";
	int i;

	i = -1;
	this->name = rhs.name;
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
	// copy the new ones
	i = -1;
	inventory = new AMateria*[4];
	while (++i < 4)
	{
		if (!rhs.inventory[i])
			this->inventory[i] = NULL;
		else
			this->inventory[i] = rhs.inventory[i]->clone();
	}
	return *this;
}

std::string const & Character::getName() const
{
    return (this->name);
}

void Character::equip(AMateria* m)
{
	int i = -1;
	while (++i < 4)
	{
		if (!inventory[i])
		{
			inventory[i] = m->clone();
			break;
		}
	}
}
void Character::unequip(int idx)
{
	if (inventory[idx])
	{
		delete inventory[idx];
		inventory[idx] = NULL;
	}
}
void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4)
		if(inventory[idx])
			inventory[idx]->use(target);
}

