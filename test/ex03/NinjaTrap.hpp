#ifndef NINJA_TRAP_H
#define NINJA_TRAP_H
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"
class NinjaTrap : public ClapTrap
{
public:
	NinjaTrap(void);
	~NinjaTrap(void);
	NinjaTrap(std::string name);
	NinjaTrap (NinjaTrap const & src);
	NinjaTrap & operator=(NinjaTrap const & rhs);
    void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
    void ninjaShoebox(FragTrap & rhs);
    void ninjaShoebox(ScavTrap & rhs);
    void ninjaShoebox(NinjaTrap & rhs);
};

#endif