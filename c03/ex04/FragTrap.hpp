#ifndef FRAG_TRAP_H
#define FRAG_TRAP_H
# include "ClapTrap.hpp"
class FragTrap : public ClapTrap
{
public:
	FragTrap(void);
	~FragTrap(void);
	FragTrap(std::string name);
	FragTrap (FragTrap const & src);
	FragTrap & operator=(FragTrap const & rhs);
	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void vaulthunter_dot_exe(std::string const & target);
};

std::ostream & operator<<( std::ostream & o, FragTrap const & rhs);

#endif