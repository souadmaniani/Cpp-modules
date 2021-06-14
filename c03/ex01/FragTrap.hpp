#ifndef FRAG_TRAP_H
#define FRAG_TRAP_H
#include <iostream>
#include <string>

class FragTrap
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
	FragTrap(void);
	~FragTrap(void);
	FragTrap(std::string name);
	FragTrap (FragTrap const & src);
	FragTrap & operator=(FragTrap const & rhs);
	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void vaulthunter_dot_exe(std::string const & target);
};

std::ostream & operator<<( std::ostream & o, FragTrap const & rhs);

#endif