#include "NinjaTrap.hpp"


NinjaTrap::NinjaTrap(void)
{
    std::cout << "\033[0;35mDefault constructor called for NinjaTrap\033[0m" << std::endl;
}
NinjaTrap::~NinjaTrap(void)
{
    std::cout << "\033[0;35mDestructor called for NinjaTrap\033[0m" << std::endl;
}
NinjaTrap::NinjaTrap(std::string name)
{
    std::cout << "\033[0;35mConstructor called for NinjaTrap\033[0m" << std::endl;
    Name = name;
    Hit_points = 60;
    Max_hit_points = 60;
    Energy_points = 120;
    Max_energy_points = 120;
    Level = 1;
    Melee_attack_damage = 60;
    Ranged_attack_damage = 5;
    Armor_damage_reduction = 0;
}
NinjaTrap::NinjaTrap (NinjaTrap const & src)
{
    *this = src;
}
NinjaTrap & NinjaTrap::operator=(NinjaTrap const & rhs)
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
void NinjaTrap::rangedAttack(std::string const & target)
{
    std::cout << "NINJA-TP, ";
	ClapTrap::rangedAttack(target);
}
void NinjaTrap::meleeAttack(std::string const & target)
{
    std::cout << "NINJA-TP, ";
	ClapTrap::meleeAttack(target);
}
void NinjaTrap::ninjaShoebox(FragTrap & rhs)
{   
    (void)rhs;
    std::cout << "ninjaShoebox called for FragTrap\n";
}
void NinjaTrap::ninjaShoebox(ScavTrap & rhs)
{
    (void)rhs;
    std::cout << "ninjaShoebox called for ScavTrap\n";
}
void NinjaTrap::ninjaShoebox(NinjaTrap & rhs)
{
    (void)rhs;
    std::cout << "ninjaShoebox called for NinjaTrap\n" ;
}
