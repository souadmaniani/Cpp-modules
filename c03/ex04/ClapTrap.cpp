#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "\033[0;35mDefault constructor called for ClapTrap\033[0m" << std::endl;
	return;
}

ClapTrap::~ClapTrap()
{
    std::cout << "\033[0;35mDestructor called for ClapTrap\033[0m" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & src)
{
    *this = src;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & rhs)
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

void ClapTrap::rangedAttack(std::string const & target)
{
	std::cout << Name << ", attacks ";
	std::cout << target << " at range, causing " << Ranged_attack_damage;
	std::cout << " points of damage!\n" ;
}

void ClapTrap::meleeAttack(std::string const & target)
{
	std::cout << Name << ", attacks ";
	std::cout << target << " at range, causing " << Melee_attack_damage;
	std::cout << " points of damage!\n" ;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (Hit_points + Armor_damage_reduction < (int)amount)
		Hit_points = 0;
	else if (Hit_points + Armor_damage_reduction - (int)amount > Max_hit_points)
		Hit_points = Max_hit_points;
	else
		Hit_points = Hit_points + Armor_damage_reduction - (int)amount; 
	std::cout << "Take damage " << "HP: " << Hit_points << "\n";
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if ((int)amount + Hit_points > Max_hit_points)
		Hit_points = Max_hit_points;
	else
		Hit_points += (int)amount;
	std::cout << "be repaired " << "HP: " << Hit_points << "\n";	
}
