#include <iostream>
#include <string.h>

int main()
{
    std::string my_string("HI THIS IS BRAIN");
    std::string *pointer = &my_string;
    std::string &reference = my_string;

    std::cout << *pointer << "\n";
    std::cout << reference << "\n";

}
