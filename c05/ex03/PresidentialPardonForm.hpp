#ifndef PRESIDENTIAL_PARDON_FORM_H
#define PRESIDENTIAL_PARDON_FORM_H
#include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
    std::string target;
public:
    PresidentialPardonForm();
    PresidentialPardonForm(std::string target);
    PresidentialPardonForm(PresidentialPardonForm const & src);
    PresidentialPardonForm & operator=(PresidentialPardonForm const & rhs);
    ~PresidentialPardonForm();
    void executeAction() const;
};

#endif
