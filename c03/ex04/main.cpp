#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int main()
{
    std::string target("First Target");

    SuperTrap instance("Smaniani");
    instance.meleeAttack(target);
    return (0);
}