#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "\033[0;33mFragTrap: Let's get this party started!\033[0m" << std::endl;
	return;
}

FragTrap::~FragTrap()
{
	std::cout << "\033[0;33mFragTrap: I'm too pretty to die!\033[0m" << std::endl;
}

FragTrap::FragTrap(std::string name) : Name(name)
{
	std::cout << "\033[0;33mFragTrap: Let's get this party started!\033[0m" << std::endl;
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
	return *this;
}

void FragTrap::rangedAttack(std::string const & target)
{
	std::cout << "FR4G-TP, " << Name << ", attacks ";
	std::cout << target << " at range, causing " << Ranged_attack_damage;
	std::cout << " points of damage!\n" ;
}

void FragTrap::meleeAttack(std::string const & target)
{
	std::cout << "FR4G-TP, " << Name << ", attacks ";
	std::cout << target << ", causing " << Melee_attack_damage;
	std::cout << " points of damage!\n" ;
}

void FragTrap::takeDamage(unsigned int amount)
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

void FragTrap::beRepaired(unsigned int amount)
{
	if ((int)amount + Hit_points > Max_hit_points)
		Hit_points = Max_hit_points;
	else
		Hit_points += (int)amount;
	std::cout << "Good as new, I think. Am I leaking? " << "\033[0;31m HP: " << Hit_points << "\033[m\n";	
}

// chasseur de coffre
void FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	std::cout << "\033[0;34mPlace your bets!\033[m\n";
	if (Energy_points - 25 < 0)
		std::cout << "\033[0;31m" << "==> "<< target << " has no energy!\033[m\n";
	else
	{
		Energy_points -= 25;
		std::cout << "==> "<< target <<" has " << Energy_points << " Energy points\n";
	}
}
