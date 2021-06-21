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
    AMateria* tmp;tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);
    /************* Test *************/
    Character *souad = new Character("souad");
    Character *oussama = new Character("oussama");
    souad->equip(tmp);
    tmp = src->createMateria("ice");
    souad->equip(tmp);
    tmp = src->createMateria("ice");
    souad->equip(tmp);
    souad->use(0, *me);
    souad->use(1, *bob);
    souad->use(2, *souad);
    *oussama = *souad;
    souad->unequip(2); // remove ice at index 2 from souad
    oussama->use(0, *me);
    oussama->use(1, *bob);
    oussama->use(2, *souad);   
    delete souad;
    delete oussama;
    /************* End Test*************/

    // delete bob;
    delete me;
    delete src;
    return 0;
}