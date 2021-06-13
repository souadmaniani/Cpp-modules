#ifndef SCAV_TRAP_H
#define SCAV_TRAP_H
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:
	int Energy_points = 50;
	int Max_energy_points = 50;
	int Melee_attack_damage = 20;
	int Ranged_attack_damage = 15;
	int Armor_damage_reduction = 3;
public:
	ScavTrap(void);
	~ScavTrap(void);
	ScavTrap(std::string name);
	ScavTrap (ScavTrap const & src);
	ScavTrap & operator=(ScavTrap const & rhs);

	void challengeNewcomer(std::string const & target);
};

std::ostream & operator<<( std::ostream & o, ScavTrap const & rhs);

#endif
