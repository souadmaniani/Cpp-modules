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
    // non-virtual destructor cause undefined behavior
    // std::cout << "---------------------------\n";
    // Peon *d = new Peon("Ross");  
    // Victim *b = d;
    // delete b;
    // std::cout << "---------------------------\n";
    // it cannot instanciat without parameters
    // Sorcerer *roberto = new Sorcerer();
    // std::cout << "---------------------------\n";
    // Cat lily("Lily");
    // std::cout << lily;
    // robert.polymorph(lily);
    /***********************************************/
    return 0;
}
