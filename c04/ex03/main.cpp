#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"

int main()
{
    
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter* me = new Character("me");
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);
    /************* Test *************/
    // std::cout << "-----------------------------" << "\n";
    // Character* oussama = new Character("oussama");
    // Character* souad = new Character("souad");
    // tmp = src->createMateria("ice");
    // std::cout << "-----------------------------" << "\n";
    // Character* mohammed = new Character("mohammed");
    // tmp->use(*mohammed);
    // tmp->use(*mohammed);
    // tmp->use(*mohammed);
    // std::cout << "XP: " << tmp->getXP() << "\n";
    // std::cout << "-----------------------------" << "\n";
    // oussama->equip(tmp);
    // oussama->equip(tmp);
    // oussama->use(0, *souad);
    // oussama->use(1, *souad);
    // std::cout << "-----------------------------" << "\n";
    // std::cout << "My name is: " << souad->getName() << "\n";
    // *souad = *oussama;
    // std::cout << "My name is now : " << souad->getName() << "\n";
    // oussama->unequip(0);
    // std::cout << "-----------------------------" << "\n";
    // souad->use(0, *souad); 
    // souad->use(1, *souad);
    // delete souad;
    // delete oussama;
    /************* End Test*************/

    delete bob;
    delete me;
    delete src;
    return 0;
}