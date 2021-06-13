#ifndef SCAV_TRAP_H
#define SCAV_TRAP_H
#include <iostream>
#include <string>

class ScavTrap
{
private:
	int Hit_points = 100;
	int Max_hit_points = 100;
	int Energy_points = 100;
	int Max_energy_points = 100;
	int Level = 1;
	std::string Name;
	int Melee_attack_damage = 20; // when ur close enough
	int Ranged_attack_damage = 15;
	int Armor_damage_reduction = 3;
public:
	ScavTrap(void);
	~ScavTrap(void);
	ScavTrap(std::string name);
	ScavTrap (ScavTrap const & src);
	ScavTrap & operator=(ScavTrap const & rhs);
	std::string & getName( void ) const;
	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void challengeNewcomer(std::string const & target);
};

std::ostream & operator<<( std::ostream & o, ScavTrap const & rhs);

#endif

// killing an enemy restore Health, but  costs shields (armor)