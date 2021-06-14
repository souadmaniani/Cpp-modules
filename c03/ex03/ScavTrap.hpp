#ifndef SCAV_TRAP_H
#define SCAV_TRAP_H
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
	ScavTrap(void);
	~ScavTrap(void);
	ScavTrap(std::string name);
	ScavTrap (ScavTrap const & src);
	ScavTrap & operator=(ScavTrap const & rhs);
	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void challengeNewcomer(std::string const & target);
};

#endif