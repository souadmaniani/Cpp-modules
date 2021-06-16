#include "ScavTrap.hpp"

std::string challenges[5] = {
	"Kill varkid pods before they hatch.",
	"Kill enemies with corrosive damage.",
	"Collect Money from cash drops.",
	"Kill enemies by ramming them with a vehicle.",
	"Shoot chains to release midgets from shields."
};

ScavTrap::ScavTrap()
{
   	std::cout << "\033[0;33mScavTrap: Let's get this party started!\033[0m" << std::endl;
	return;
}

ScavTrap::~ ScavTrap()
{
    std::cout << "\033[0;33mScavTrap: I'm too pretty to die!\033[0m" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
    std::cout << "\033[0;33mScavTrap: Let's get this party started!\033[0m" << std::endl;
	Name = name;
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
	std::cout << target << " at range, causing " << "\033[0;31m" << Ranged_attack_damage;
	std::cout << " points of damage!\033[m. (rangedAttack)\n" ;
}

void    ScavTrap::meleeAttack(std::string const & target)
{
	std::cout << "SCAV-TP, " << Name << ", attacks ";
	std::cout << target << ", causing " << "\033[0;31m" << Melee_attack_damage;
	std::cout << " points of damage!\033[m . (meleeAttack)\n" ;
}

void ScavTrap::challengeNewcomer(std::string const & target)
{
	srand(time(0));
	std::cout << "\033[0;34mYou wanna fight with me?! Put 'em up!.. Put 'em up?\033[m. (challengeNewcomer)\n";
	std::cout << "SCAV-TP, " << Name << ", challenges ";
	std::cout << target << ", its challenge is: \n";
	std::cout << "==> "<< challenges[rand() % 5] << "\n";
}
