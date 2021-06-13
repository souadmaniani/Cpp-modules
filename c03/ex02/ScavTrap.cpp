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

void challengeNewcomer(std::string const & target)
{
    // choose a challenge at random from a set of various
    // (and hopefully funny) challenges you
    // will have to invent, and print it on the standard output.
}