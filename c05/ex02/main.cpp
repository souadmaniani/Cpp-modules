#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
    // Required grades: sign 145, exec 137
    ShrubberyCreationForm form1("home");
    PresidentialPardonForm form2("president");
    RobotomyRequestForm form3("robot");
    std::cout << "----------------------------\n";
    Bureaucrat smaniani("smaniani", 1);
    // not signed yet
    try
    {
        smaniani.executeForm(form1);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what();
    }
    std::cout << "----------------------------\n";
    // will be executed
    try
    {
        form1.beSigned(smaniani);
        smaniani.executeForm(form1);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what();
    }
    std::cout << "----------------------------\n";
    // too low grade
    Bureaucrat ozakkare("ozakkare", 146);
    try
    {
        ozakkare.executeForm(form1);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what();
    }
    std::cout << "----------------------------\n";
    Bureaucrat ael_fadi("ael_fadi", 2);
    try
    {
        form2.beSigned(ael_fadi);
        ael_fadi.executeForm(form2);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "----------------------------\n";
    try
    {
        form3.beSigned(ael_fadi);
        ael_fadi.executeForm(form3);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}