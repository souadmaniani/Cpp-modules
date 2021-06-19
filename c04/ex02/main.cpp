#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include "Squad.hpp"

int main()
{
    ISpaceMarine* bob = new TacticalMarine;
    ISpaceMarine* jim = new AssaultTerminator;
    Squad* vlc = new Squad;
    vlc->push(bob);
    vlc->push(jim);
    // for (int i = 0; i < vlc->getCount(); ++i)
    // {
    //     ISpaceMarine* cur = vlc->getUnit(i);
    //     cur->battleCry();
    //     cur->rangedAttack();
    //     cur->meleeAttack();
    // }
    /************************************************************/
    // ISpaceMarine *copy;
    // copy = bob->clone();
    // std::cout << "copy: " << copy << "\n";
    // std::cout << "bob: " << bob << "\n";
    // delete bob;
    // bob = NULL;
    // copy->meleeAttack();
    // delete copy;
    // copy = NULL;
    // std::cout << "\n";
    /************************************************************/
    /************************************************************/
    std::cout << "*********** USE THE ASSIGNATION OPERATOR ***********\n";
    Squad *rhs = new Squad;
    *rhs = *vlc;
    for (int i = 0; i < rhs->getCount(); ++i)
    {
        ISpaceMarine* cur = rhs->getUnit(i);
        cur->battleCry();
        cur->rangedAttack();
        cur->meleeAttack();
        std::cout << "-------------------------------------\n";
    }
    std::cout << "************ END FOR THE ASSIGNATION OPERATOR ***********\n";
    /************************************************************/
    // delete vlc;
    return 0;
}
