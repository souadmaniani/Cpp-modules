#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "Default constructor called for FragTrap" << std::endl;
	return;
}

FragTrap::~FragTrap()
{
	std::cout << "Destructor called FragTrap" << std::endl;
}

FragTrap::FragTrap(std::string name) : Name(name)
{
	Hit_points = 100;
	Max_hit_points = 100;
	Energy_points = 100;
	Max_energy_points = 100;
	Level = 1;
	Melee_attack_damage = 30;
	Ranged_attack_damage = 20;
	Armor_damage_reduction = 5;
}

FragTrap::FragTrap(FragTrap const & src)
{
	*this = src;
}

FragTrap & FragTrap::operator=(FragTrap const & rhs)
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

}
// The number of hit points can never exceed the number of max hit points. Same for
// the energy points. If, for example, you repair too much Hit_points, then you set them to
// the max Hit_points number. In the same way, they can’t fall below 0.

// When you take damage, you have to take your armor damage reduction into account.
void FragTrap::rangedAttack(std::string const & target)
{
	std::cout << "FR4G-TP" << this->getName() << "attacks ";
	std::cout << target << "at range, causing " << Ranged_attack_damage;
	std::cout << "points of damage!" ;
}

void FragTrap::meleeAttack(std::string const & target)
{
	std::cout << "FR4G-TP" << this->getName() << "attacks ";
	std::cout << target << "at range, causing " << Melee_attack_damage;
	std::cout << "points of damage!" ;
}

void FragTrap::takeDamage(unsigned int amount)
{
	if (Hit_points + Armor_damage_reduction < amount)
		Hit_points = 0;
	else if (Hit_points + Armor_damage_reduction - amount > Max_hit_points)
		Hit_points = Max_hit_points;
	else
		Hit_points = Hit_points + Armor_damage_reduction - amount; 
	std::cout << "Take damage " << "HP:" << Hit_points << "\n";
}

void FragTrap::beRepaired(unsigned int amount)
{
	if (amount + Hit_points > Max_hit_points)
		Hit_points = Max_hit_points;
	else
		Hit_points += amount;
	std::cout << "be repaired " << "HP:" << Hit_points << "\n";	
}

// chasseur de coffre

void FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	if (Energy_points - 25 < 0)
		std::cout << "it’s out of energy\n";
	else
	{
		Energy_points -= 25;
		std::cout << "vaulthunter_dot_exe " << Energy_points;
	}

	// This function costs 25 energy points to run. If you
	// don’t have enough energy points, it will do nothing else
	// than print something indicating
	// it’s out of energy.
}

// void FragTrap::beRepaired(unsigned int amount)
// {
// 	if((int)(amount) + Hitpoints > Maxhitpoints)
// 		Hitpoints = Maxhitpoints;
// 	else
// 		Hitpoints += (int)amount;
// 	if((int)(amount) + Energypoints > Maxenergypoints)
// 		Energypoints = Maxenergypoints;
// 	else
// 		Energypoints += amount;
// 	std::cout<<"\033[1;32mYou are Repaired :) !\033[0m HP:"<<Hitpoints<<" Energypoints :"<<Energypoints<<std::endl;
// }