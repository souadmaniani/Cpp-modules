#include "ScavTrap.hpp"

ScavTrap::  ScavTrap()
{
    std::cout << "Default constructor called for ScavTrap" << std::endl;
	return;
}

ScavTrap::~ ScavTrap()
{
    std::cout << "Destructor called for ScavTrap" << std::endl;
}

ScavTrap::  ScavTrap(std::string name)
{

}

ScavTrap::  ScavTrap( ScavTrap const & src)
{

}
// The number of hit points can never exceed the number of max hit points. Same for
// the energy points. If, for example, you repair too much Hit_points, then you set them to
// the max Hit_points number. In the same way, they can’t fall below 0.

// When you take damage, you have to take your armor damage reduction into account.
void    ScavTrap::rangedAttack(std::string const & target)
{
    std::cout << "FR4G-TP" << this->getName() << "attacks ";
    std::cout << target << "at range, causing " << "<damage>";
    std::cout << "points of damage!" ;
}

void    ScavTrap::meleeAttack(std::string const & target)
{
    std::cout << "FR4G-TP" << this->getName() << "attacks ";
    std::cout << target << "at range, causing " << "<damage>";
    std::cout << "points of damage!" ;
}

void    ScavTrap::takeDamage(unsigned int amount)
{

}

void    ScavTrap::beRepaired(unsigned int amount)
{

}

void challengeNewcomer(std::string const & target)
{
    // choose a challenge at random from a set of various
    // (and hopefully funny) challenges you
    // will have to invent, and print it on the standard output.
}