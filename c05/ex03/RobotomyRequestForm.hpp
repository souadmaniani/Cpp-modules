#ifndef ROBOTOMYREQUEST_FORM_H
#define ROBOTOMYREQUEST_FORM_H
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
    std::string target;
public:
    RobotomyRequestForm();
    RobotomyRequestForm(std::string target);
    RobotomyRequestForm(RobotomyRequestForm const & src);
    RobotomyRequestForm & operator=(RobotomyRequestForm const & rhs);
    ~RobotomyRequestForm();
    void executeAction() const;
};

#endif
