#include "Intern.hpp"

int main()
{
    Intern  someRandomIntern;
    Form*   rrf;
    Bureaucrat smaniani("smaniani", 1);
    {
        rrf = someRandomIntern.makeForm("robotomy request", "Bender");
        try
        {
            smaniani.executeForm(*rrf);
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what();
        }
        delete rrf;
        std::cout << "----------------------------------\n";
        rrf = someRandomIntern.makeForm("shrubbery creation", "home");
        try
        {
            rrf->beSigned(smaniani);
            smaniani.executeForm(*rrf);
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        delete rrf;
        std::cout << "----------------------------------\n";
    }
    // {
    //     rrf = someRandomIntern.makeForm("shrubbery creation", "home");
    //     if (rrf)
    //     delete rrf;
    //     std::cout << "----------------------------------\n";
    // }
    // {
    //     rrf = someRandomIntern.makeForm("presidential pardon", "president");
    //     if (rrf)
    //     delete rrf;
    //     std::cout << "----------------------------------\n";
    // }
    // {
    //     rrf = someRandomIntern.makeForm("ozakkare", "Super man");
    //     if (rrf)
    //     delete rrf;
    //     std::cout << "----------------------------------\n";
    // }    
}