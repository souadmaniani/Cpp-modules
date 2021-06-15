#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    std::string target("First Target");

    FragTrap instance1("Smaniani");
    ScavTrap instance2("Ozakkare");
    instance1.vaulthunter_dot_exe(target);
    instance2.challengeNewcomer(target);
    instance1.meleeAttack(target);
    instance2.meleeAttack(target);
    return (0);
}