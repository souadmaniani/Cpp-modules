#include "ShrubberyCreationForm.hpp"
int main()
{
    ShrubberyCreationForm form1("home");
    Bureaucrat smaniani("smaniani", 144);
    try
    {
        form1.beSigned(smaniani);
        form1.executeAction(smaniani);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what();
    }
    
}