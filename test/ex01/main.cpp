#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    std::string target("First Target");

    FragTrap instance1("Smaniani");
    ScavTrap instance2("Ozakkare");
    instance1.rangedAttack(target);
    instance2.rangedAttack(target);
    instance1.meleeAttack(target);
    instance2.meleeAttack(target);
    instance1.takeDamage(20);
    instance2.takeDamage(20);
    instance1.beRepaired(5);
    instance2.beRepaired(5);
    
    instance1.vaulthunter_dot_exe(target);
    instance2.challengeNewcomer(target);

    return (0);
}