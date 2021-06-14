#include "SuperTrap.hpp"

SuperTrap::SuperTrap()
{
	std::cout << "\033[0;35mDefault constructor called for SuperTrap\033[0m" << std::endl;
	return;
}

SuperTrap::~SuperTrap()
{
	std::cout << "\033[0;35mDestructor called for SuperTrap\033[0m" << std::endl;
}

SuperTrap::SuperTrap(std::string name)
{
	std::cout << "\033[0;35mConstructor called for SuperTrap\033[0m" << std::endl;
	Name = name;
	Hit_points = FragTrap::Hit_points;
	Max_hit_points = FragTrap::Max_hit_points;
	Energy_points = NinjaTrap::Energy_points;
	Max_energy_points = NinjaTrap::Max_energy_points;
	Level = 1;
	Melee_attack_damage = NinjaTrap::Melee_attack_damage;
	Ranged_attack_damage = FragTrap::Ranged_attack_damage;
	Armor_damage_reduction = FragTrap::Armor_damage_reduction;
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
	// NinjaTrap::meleeAttack(target);
	std::cout << "SuperTrap, ";
	std::cout << Name << ", attacks ";
	std::cout << target << " at range, causing " << Melee_attack_damage;
	std::cout << " points of damage!\n" ;
}
