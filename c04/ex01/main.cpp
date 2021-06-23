#include "Character.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"
#include "PowerFist.hpp"
#include "PlasmaRifle.hpp"

int main()
{
    Character* me = new Character("me");
    std::cout << *me;
    Enemy* b = new RadScorpion();
    AWeapon* pr = new PlasmaRifle();
    AWeapon* pf = new PowerFist();
    me->equip(pr);
    std::cout << *me;
    me->equip(pf);
    me->attack(b);
    std::cout << *me;
    me->equip(pr);
    std::cout << *me;
    me->attack(b);
    std::cout << *me;
    me->attack(b);
    std::cout << *me;
    /*********************** TESTS **********************/
    // std::cout << "----------------------------------------\n";
    // me->recoverAP();
    // me->recoverAP();
    // std::cout << *me;
    // Enemy* c = new SuperMutant();
    // me->attack(c);
    // std::cout << c->getType() << " has " << c->getHP() << " HP\n" ;
    // delete c;
    // delete me;
    // delete pr;
    // delete pf;
    /******************************************************/
    
    return 0;
}
