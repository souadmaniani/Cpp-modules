#include "Bureaucrat.hpp"

int main()
{
    // low than 1
    try
    {
       Bureaucrat ozakkare("ozakkare", -13);
       std::cout << ozakkare;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what();
    }
    // high than 150
    try
    {
       Bureaucrat smaniani("smaniani", 151);
       std::cout << smaniani;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what();
    }
    // normal case
    try
    {
       Bureaucrat ozakkare("ozakkare", 37);
       std::cout << ozakkare;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what();
    }
}
