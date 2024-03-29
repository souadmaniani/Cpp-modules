#ifndef SHRUBBERY_CREATION_FORM_H
#define SHRUBBERY_CREATION_FORM_H
#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
private:
    std::string target;
public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(std::string target);
    ShrubberyCreationForm(ShrubberyCreationForm const & src);
    ShrubberyCreationForm & operator=(ShrubberyCreationForm const & rhs);
    ~ShrubberyCreationForm();
    void executeAction() const;
};

#endif
