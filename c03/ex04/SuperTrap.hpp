#ifndef SUPER_TRAP_H
#define SUPER_TRAP_H
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap
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
	SuperTrap(void);
	~SuperTrap(void);
	SuperTrap(std::string name);
	SuperTrap (SuperTrap const & src);
	SuperTrap & operator=(SuperTrap const & rhs);

	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
};

#endif
