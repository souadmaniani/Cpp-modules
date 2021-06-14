#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int main()
{
    std::string target("First Target");

    FragTrap instance1("Smaniani");
    ScavTrap instance2("Ozakkare");
    NinjaTrap instance3("ael_fadi");
    instance3.ninjaShoebox(instance1);
    instance3.ninjaShoebox(instance2);
    instance3.ninjaShoebox(instance3);
    instance3.meleeAttack(target);
    return (0);
}