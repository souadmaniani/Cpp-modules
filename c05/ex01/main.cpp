#include "Form.hpp"

int main()
{
    // not a valid _gradeTosign
    try
    {
        Form my_form("Certificate", 160, 4);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what();
    }
    std::cout << "----------------------------------------------------------\n";
    // not a valid grade
    try
    {
        Form my_form("Certificate", 1, 4);
        Bureaucrat smaniani("smaniani", 2);
        smaniani.signForm(my_form);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what();
    }
    std::cout << "----------------------------------------------------------\n";
    // a valid grades
     try
    {
        Form my_form("Certificate", 2, 4);
        Bureaucrat smaniani("smaniani", 1);
        smaniani.signForm(my_form);
        std::cout << my_form;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what();
    }
}
