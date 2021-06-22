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
    for (int i = 0; i < vlc->getCount(); ++i)
    {
        ISpaceMarine* cur = vlc->getUnit(i);
        cur->battleCry();
        cur->rangedAttack();
        cur->meleeAttack();
    }
    /********************** TEST ***************************/
    // std::cout << "*********** USE THE ASSIGNATION OPERATOR ***********\n";
    // Squad *rhs = new Squad;
    // *rhs = *vlc;
    // delete vlc;
    // for (int i = 0; i < rhs->getCount(); ++i)
    // {
    //     ISpaceMarine* cur = rhs->getUnit(i);
    //     cur->battleCry();
    //     cur->rangedAttack();
    //     cur->meleeAttack();
    //     std::cout << "-------------------------------------\n";
    // }
    // delete rhs;
    /********************* END TEST ******************************/
    delete vlc;
    
    return 0;
}
