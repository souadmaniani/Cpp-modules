#include "ScavTrap.hpp"

std::string challenges[5] = {
	"Kill varkid pods before they hatch.",
	"Kill enemies with corrosive damage.",
	"Collect Money from cash drops.",
	"Kill enemies by ramming them with a vehicle.",
	"Shoot chains to release midgets from shields."
};

ScavTrap::  ScavTrap()
{
    std::cout << "\033[0;33mScavTrap: Let's get this party started!\033[0m" << std::endl;
	return;
}

ScavTrap::~ ScavTrap()
{
	std::cout << "\033[0;33mScavTrap: I'm too pretty to die!\033[0m" << std::endl;
}

ScavTrap::ScavTrap(std::string name): Name(name)
{
    std::cout << "\033[0;33mScavTrap: Let's get this party started!\033[0m" << std::endl;
    Hit_points = 100;
	Max_hit_points = 100;
	Energy_points = 100;
	Max_energy_points = 100;
	Level = 1;
	Melee_attack_damage = 20;
	Ranged_attack_damage = 15;
	Armor_damage_reduction = 3;
}

ScavTrap::ScavTrap( ScavTrap const & src)
{
    *this = src;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & rhs)
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

void    ScavTrap::rangedAttack(std::string const & target)
{
	std::cout << "SCAV-TP, " << Name << ", attacks ";
	std::cout << target << " at range, causing " << Ranged_attack_damage;
	std::cout << " points of damage!\n" ;
}

void    ScavTrap::meleeAttack(std::string const & target)
{
	std::cout << "SCAV-TP, " << Name << ", attacks ";
	std::cout << target << " , causing " << Melee_attack_damage;
	std::cout << " points of damage!\n" ;
}

void    ScavTrap::takeDamage(unsigned int amount)
{
	if (Hit_points + Armor_damage_reduction < (int)amount)
		Hit_points = 0;
	else if (Hit_points + Armor_damage_reduction - (int)amount > Max_hit_points)
		Hit_points = Max_hit_points;
	else
		Hit_points = Hit_points + Armor_damage_reduction - (int)amount; 
	std::cout << "Oh my God, I'm leaking! There's oil everywhere!";
	std::cout << "\033[0;31m HP: " << Hit_points << "\033[m\n";
}

void    ScavTrap::beRepaired(unsigned int amount)
{
	if ((int)amount + Hit_points > Max_hit_points)
		Hit_points = Max_hit_points;
	else
		Hit_points += (int)amount;
	std::cout << "Good as new, I think. Am I leaking? " << "\033[0;31m HP: " << Hit_points << "\033[m\n";	
}

void ScavTrap::challengeNewcomer(std::string const & target)
{
	srand(time(0));
	std::cout << "\033[0;34mYou wanna fight with me?! Put 'em up!.. Put 'em up?\033[m\n";
	std::cout << "SCAV-TP, " << Name << ", challenges ";
	std::cout << target << ", its challenge is: ";
	std::cout << challenges[rand() % 5] << "\n";
}