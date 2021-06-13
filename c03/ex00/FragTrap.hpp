#ifndef FRAG_TRAP_H
#define FRAG_TRAP_H
#include <iostream>
#include <string>

class FragTrap
{
private:
	int Hit_points = 100;
	int Max_hit_points = 100;
	int Energy_points = 100;
	int Max_energy_points = 100;
	int Level = 1;
	std::string Name;
	int Melee_attack_damage = 30; // when ur close enough
	int Ranged_attack_damage = 20;
	int Armor_damage_reduction = 5;
public:
	FragTrap(void);
	~FragTrap(void);
	FragTrap(std::string name);
	FragTrap (FragTrap const & src);
	FragTrap & operator=(FragTrap const & rhs);
	std::string & getName( void ) const;
	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void vaulthunter_dot_exe(std::string const & target);
};

std::ostream & operator<<( std::ostream & o, FragTrap const & rhs);

#endif

// killing an enemy restore Health, but  costs shields (armor)