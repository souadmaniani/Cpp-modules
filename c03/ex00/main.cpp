#include "FragTrap.hpp"

int main()
{
    std::string target("First Target");

    FragTrap instance("Smaniani");
    instance.rangedAttack(target);
    instance.meleeAttack(target);
    instance.takeDamage(20);
    instance.takeDamage(100);
    instance.beRepaired(5);
    instance.beRepaired(100);
    
    instance.vaulthunter_dot_exe(target);
    instance.vaulthunter_dot_exe(target);
    instance.vaulthunter_dot_exe(target);
    instance.vaulthunter_dot_exe(target);
    instance.vaulthunter_dot_exe(target);
    return (0);
}
