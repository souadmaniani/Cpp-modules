#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "Default constructor called for ClapTrap" << std::endl;
	return;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called for ClapTrap" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{

}

ClapTrap::ClapTrap(ClapTrap const & src)
{

}
// When you take damage, you have to take your armor damage reduction into account.
void ClapTrap::rangedAttack(std::string const & target)
{
    std::cout << "FR4G-TP" << this->getName() << "attacks ";
    std::cout << target << "at range, causing " << "<damage>";
    std::cout << "points of damage!" ;
}

void ClapTrap::meleeAttack(std::string const & target)
{
    std::cout << "FR4G-TP" << this->getName() << "attacks ";
    std::cout << target << "at range, causing " << "<damage>";
    std::cout << "points of damage!" ;
}

void ClapTrap::takeDamage(unsigned int amount)
{

}

void ClapTrap::beRepaired(unsigned int amount)
{

}
