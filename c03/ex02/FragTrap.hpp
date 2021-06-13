#ifndef FRAG_TRAP_H
#define FRAG_TRAP_H
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
private:
	int Energy_points = 100;
	int Max_energy_points = 100;
	int Melee_attack_damage = 30; // when ur close enough
	int Ranged_attack_damage = 20;
	int Armor_damage_reduction = 5;
public:
	FragTrap(void);
	~FragTrap(void);
	FragTrap(std::string name);
	FragTrap (FragTrap const & src);
	FragTrap & operator=(FragTrap const & rhs);

	void vaulthunter_dot_exe(std::string const & target);
};

std::ostream & operator<<( std::ostream & o, FragTrap const & rhs);

#endif

// killing an enemy restore Health, but  costs shields (armor)