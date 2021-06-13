#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "Default constructor called" << std::endl;
	return;
}

FragTrap::~FragTrap()
{
    std::cout << "Destructor called" << std::endl;
}

FragTrap::FragTrap(std::string name)
{

}

FragTrap::FragTrap(FragTrap const & src)
{

}
// The number of hit points can never exceed the number of max hit points. Same for
// the energy points. If, for example, you repair too much Hit_points, then you set them to
// the max Hit_points number. In the same way, they can’t fall below 0.

// When you take damage, you have to take your armor damage reduction into account.
void FragTrap::rangedAttack(std::string const & target)
{
    std::cout << "FR4G-TP" << this->getName() << "attacks ";
    std::cout << target << "at range, causing " << "<damage>";
    std::cout << "points of damage!" ;
}

void FragTrap::meleeAttack(std::string const & target)
{
    std::cout << "FR4G-TP" << this->getName() << "attacks ";
    std::cout << target << "at range, causing " << "<damage>";
    std::cout << "points of damage!" ;
}

void FragTrap::takeDamage(unsigned int amount)
{

}

void FragTrap::beRepaired(unsigned int amount)
{

}

// chasseur de coffre

void FragTrap::vaulthunter_dot_exe(std::string const & target)
{
    // This function costs 25 energy points to run. If you
    // don’t have enough energy points, it will do nothing else
    // than print something indicating
    // it’s out of energy.
}