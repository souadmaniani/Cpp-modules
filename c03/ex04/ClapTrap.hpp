#ifndef CLAP_TRAP_H
#define CLAP_TRAP_H
#include <iostream>
#include <string>

class ClapTrap
{
protected:
	int Hit_points;
	int Max_hit_points;
	int Energy_points;
	int Max_energy_points;
	int Level;
	std::string Name;
	int Melee_attack_damage;
	int Ranged_attack_damage;
	int Armor_damage_reduction;
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
