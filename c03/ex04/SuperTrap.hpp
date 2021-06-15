#ifndef SUPER_TRAP_H
#define SUPER_TRAP_H
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap
{
public:
	SuperTrap(void);
	~SuperTrap(void);
	SuperTrap(std::string name);
	SuperTrap (SuperTrap const & src);
	SuperTrap & operator=(SuperTrap const & rhs);

	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void vaulthunter_dot_exe(std::string const & target);
	void ninjaShoebox(FragTrap & rhs);
    void ninjaShoebox(ScavTrap & rhs);
    void ninjaShoebox(NinjaTrap & rhs);
};

#endif
