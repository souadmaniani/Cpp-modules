#ifndef CLAP_TRAP_H
#define CLAP_TRAP_H
#include <iostream>
#include <string>

class ClapTrap
{
private:
	int Hit_points = 100;
	int Max_hit_points = 100;
	int Level = 1;
	std::string Name;
public:
	ClapTrap(void);
	~ClapTrap(void);
	ClapTrap(std::string name);
	ClapTrap (ClapTrap const & src);
	ClapTrap & operator=(ClapTrap const & rhs);
	std::string & getName( void ) const;

	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

};

std::ostream & operator<<( std::ostream & o, ClapTrap const & rhs);

#endif
