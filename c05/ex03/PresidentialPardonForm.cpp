#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
{
    
}
PresidentialPardonForm::PresidentialPardonForm(std::string target) :
Form("presidential pardon", 25, 5), target(target)
{  
    std::cout << "Constructor PresidentialPardonForm\n";
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    
}
PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src)
{
    *this = src;
}
PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs)
{
    this->target = rhs.target;
    return (*this);
}

void PresidentialPardonForm::executeAction() const
{
   std::cout << this->target << " has been pardoned by Zafod Beeblebrox\n";
}
