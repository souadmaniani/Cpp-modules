#include "SuperTrap.hpp"

SuperTrap::SuperTrap()
{
	std::cout << "\033[0;33mSuperTrap: Let's get this party started!\033[0m" << std::endl;
	return;
}

SuperTrap::~SuperTrap()
{
	std::cout << "\033[0;33mSuperTrap: I'm too pretty to die!\033[0m" << std::endl;
}

SuperTrap::SuperTrap(std::string name)
{
	std::cout << "\033[0;33mSuperTrap: Let's get this party started!\033[0m" << std::endl;
	Name = name;
	Hit_points = 100;
	Max_hit_points = 100;
	Energy_points = 120;
	Max_energy_points = 120;
	Level = 1;
	Melee_attack_damage = 60;
	Ranged_attack_damage = 20;
	Armor_damage_reduction = 5;
}

SuperTrap::SuperTrap(SuperTrap const & src)
{
	*this = src;
}

SuperTrap & SuperTrap::operator=(SuperTrap const & rhs)
{
	this->Name = rhs.Name;
	this->Hit_points = rhs.Hit_points;
	this->Max_hit_points = rhs.Max_hit_points;
	this->Energy_points = rhs.Energy_points;
	this->Max_energy_points = rhs.Max_energy_points;
	this->Level = rhs.Level;
	this->Melee_attack_damage = rhs.Melee_attack_damage;
	this->Ranged_attack_damage = rhs.Ranged_attack_damage;
	this->Armor_damage_reduction = rhs.Armor_damage_reduction;
	return *this;
}

void SuperTrap::rangedAttack(std::string const & target)
{
	FragTrap::rangedAttack(target);
}

void SuperTrap::meleeAttack(std::string const & target)
{
	NinjaTrap::meleeAttack(target);
}

void SuperTrap::vaulthunter_dot_exe(std::string const & target)
{
	FragTrap::vaulthunter_dot_exe(target);
}

void SuperTrap::ninjaShoebox(FragTrap & rhs)
{
	NinjaTrap::ninjaShoebox(rhs);
}

void SuperTrap::ninjaShoebox(ScavTrap & rhs)
{
	NinjaTrap::ninjaShoebox(rhs);
}

void SuperTrap::ninjaShoebox(NinjaTrap & rhs)
{
	NinjaTrap::ninjaShoebox(rhs);
}
