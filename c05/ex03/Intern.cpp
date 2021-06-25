#include "Intern.hpp"

Intern::Intern(/* args */)
{
}

Intern::~Intern()
{
}

// Form* Intern::makeForm(std::string name, std::string target)
// {
//     std::string formsName[] = {"shrubbery creation", "robotomy request", "presidential pardon"};
//     Form*   rrf;
    
//     return (rrf);
// }



Form* Intern::makeForm(std::string name, std::string target)
{
    Form *forms[3] = {new ShrubberyCreationForm(target), new RobotomyRequestForm(target), new PresidentialPardonForm(target)};
    std::cout << "----------------------------------\n";
    for(int i = 0 ; i < 3; i++)
    {
        if (name.compare(forms[i]->getName()) == 0)
        {
            std::cout << "Intern creates " << forms[i]->getName() << "\n";
            for (int j = 0; j < 3; j++)
            {
                if (i != j)
                    delete forms[j];
            }
            return forms[i];
        }
    }
    std::cout << "The requested Form is not known\n";
    return NULL;;
}
