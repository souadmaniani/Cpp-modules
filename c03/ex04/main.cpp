#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int main()
{
    std::string target("First Target");
    
    FragTrap liar("Ozakkare");
    std::cout << "****************************************\n";
    ScavTrap scav("yassine");
    std::cout << "****************************************\n";
    NinjaTrap ninja("youssef");
    std::cout << "****************************************\n";
    SuperTrap super("Smaniani");
    std::cout << "****************************************\n";
    super.meleeAttack(target);
    super.rangedAttack(target);
    super.vaulthunter_dot_exe(target);
    std::cout << "****************************************\n";
    super.ninjaShoebox(liar);
    super.ninjaShoebox(scav);
    super.ninjaShoebox(ninja);
    std::cout << "****************************************\n";
    return (0);
}
