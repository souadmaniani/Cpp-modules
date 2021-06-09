#include "Brain.hpp"

int  main()
{
    std::string my_address;

    Brain instance;
    my_address = instance.identify();
    std::cout << my_address << "\n";
    
}