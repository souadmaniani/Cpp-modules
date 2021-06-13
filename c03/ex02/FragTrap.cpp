#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "Default constructor called for FragTrap" << std::endl;
	return;
}

FragTrap::~FragTrap()
{
    std::cout << "Destructor called for FragTrap" << std::endl;
}

FragTrap::FragTrap(std::string name)
{

}

FragTrap::FragTrap(FragTrap const & src)
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