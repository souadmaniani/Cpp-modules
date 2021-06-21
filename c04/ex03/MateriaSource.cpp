#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    std::cout << "*****MateriaSource*****\n";
    int i;

	i = -1;
    inventory = new AMateria*[4];
  	while (++i < 4)
		inventory[i] =  NULL;
    
}
MateriaSource::~MateriaSource()
{
    std::cout << "MateriaSource: destructor\n";
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
		this->inventory[i] = rhs.inventory[i]->clone();
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
            std::cout << "index: " << i << " ** learn Materia \n";
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
        {
            std::cout << "waaaaay!!!! Find type: " << type << "\n";
            return (inventory[i]->clone());
        }
    }
    return 0;
}
