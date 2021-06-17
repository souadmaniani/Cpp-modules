#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "\033[0;33mClapTrap: Let's get this party started!\033[0m" << std::endl;
	return;
}

ClapTrap::~ClapTrap()
{
    std::cout << "\033[0;33mClapTrap: I'm too pretty to die!\033[0m" << std::endl;
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

void ClapTrap::takeDamage(unsigned int amount)
{
	if (Hit_points + Armor_damage_reduction < (int)amount)
		Hit_points = 0;
	else if (Hit_points + Armor_damage_reduction - (int)amount > Max_hit_points)
		Hit_points = Max_hit_points;
	else
		Hit_points = Hit_points + Armor_damage_reduction - (int)amount;
	std::cout << "Oh my God, I'm leaking! There's oil everywhere!";
	std::cout << "\033[0;31m HP: " << Hit_points << "\033[m. (takeDamage)\n";
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if ((int)amount + Hit_points > Max_hit_points)
		Hit_points = Max_hit_points;
	else
		Hit_points += (int)amount;
	if ((int)amount + Energy_points > Max_energy_points)
		Energy_points = Max_energy_points;
	else
		Energy_points+=(int)amount;
	std::cout << "Good as new, I think. Am I leaking? " ;
	std::cout << "\033[0;31m HP: " << Hit_points << "\033[m, \033[0;31m EP: ";
	std::cout << Energy_points << "\033[m. (beRepaired)\n";	
}
