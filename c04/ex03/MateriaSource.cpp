#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    int i;

	i = -1;
    inventory = new AMateria*[4];
  	while (++i < 4)
		inventory[i] =  NULL;
    
}
MateriaSource::~MateriaSource()
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

MateriaSource::MateriaSource(MateriaSource const & src)
{
    *this = src;
}
MateriaSource & MateriaSource::operator=(MateriaSource const & rhs)
{
    std::cout << "MateriaSource: assignation operator\n";
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
	i = -1;
	inventory = new AMateria*[4];
	while (++i < 4)
	{
		if (!rhs.inventory[i])
			this->inventory[i] = NULL;
		else
		{
			this->inventory[i] = rhs.inventory[i]->clone();
			std::cout << "type: " << inventory[i]->getType() << " | ";
			std::cout << "xp: " << inventory[i]->getXP() << "\n";
		}
	}
	return *this;
}
void MateriaSource::learnMateria(AMateria* m)
{
    int i;

    i = -1;
    while (++i < 4)
    {
        if (!inventory[i])
        {
            inventory[i] = m;
            break ;
        }
    }
}
AMateria* MateriaSource::createMateria(std::string const & type)
{
    int i = -1;

    while (++i < 4)
    {
        if (inventory[i]->getType() == type)
            return (inventory[i]->clone());
    }
    return 0;
}
