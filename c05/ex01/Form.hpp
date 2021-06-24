#ifndef FORM_H
#define FORM_H
#include <string>
#include <iostream>
#include "Bureaucrat.hpp"
class Form
{
private:
    const std::string _name;
    bool _sign;
    int _gradeTosignForm;
    int _gradeToExecuteForm;
public:
    class GradeTooHighException : public std::exception
    {
        
    }
    class GradeTooLowException : public std::exception
    {

    }
    Form();
    Form(Form const & src);
    Form & operator(Form const & rhs);
    ~Form();
    std::string getName(void);
    int getGradeTosignForm(void);
    int getGradeToExecuteForm(void);
    bool getSign(void);
    void beSigned(Bureaucrat & target);
};

std::ostream & operator<<(std::ostream & o, Form const & rhs);

#endif
