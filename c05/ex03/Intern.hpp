#ifndef INTERN_H
#define INTERN_H
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
private:
    /* data */
public:
    Intern();
    Intern(Intern  const & src);
    Intern & operator=(Intern const & rhs);
    ~Intern();
    Form *makeForm(std::string name, std::string target);
};

#endif