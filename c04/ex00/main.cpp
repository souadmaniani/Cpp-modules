#include "Sorcerer.hpp"
#include "Peon.hpp"
#include "Cat.hpp"

int main()
{
    Sorcerer robert("Robert", "the Magnificent");
    Victim jim("Jimmy");
    Peon joe("Joe");
    std::cout << robert << jim << joe;
    robert.polymorph(jim);
    robert.polymorph(joe);
    /********************* TESTS *******************/
    // std::cout << "---------------------------\n";
    // Cat lily("Lily");
    // std::cout << lily;
    // robert.polymorph(lily);
    /***********************************************/
    return 0;
}