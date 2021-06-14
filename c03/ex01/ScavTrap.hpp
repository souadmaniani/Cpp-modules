#ifndef SCAV_TRAP_H
#define SCAV_TRAP_H
#include <iostream>
#include <string>

class ScavTrap : public ClapTrap
{
private:
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
	ScavTrap(void);
	~ScavTrap(void);
	ScavTrap(std::string name);
	ScavTrap (ScavTrap const & src);
	ScavTrap & operator=(ScavTrap const & rhs);
	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void challengeNewcomer(std::string const & target);
};

std::ostream & operator<<( std::ostream & o, ScavTrap const & rhs);

#endif