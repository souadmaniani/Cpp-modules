#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
{
    
}
RobotomyRequestForm::RobotomyRequestForm(std::string target) :
Form("robotomy request", 72, 45), target(target)
{  
    std::cout << "Constructor RobotomyRequestForm\n";
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    
}
RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src)
{
    *this = src;
}
RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs)
{
    this->target = rhs.target;
    return (*this);
}

void RobotomyRequestForm::executeAction() const
{   
    srand(time(0));
    int random = rand() % 6;
    
    if (random < 3)
    {
        std::cout << "lololo lololo\n";
        std::cout << this->target << "as been robotomized successfully 50% of the time\n";
    }
    else
        std::cout << "it’s a failure\n";

}
