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
    int _gradeTosign;
    int _gradeToExecute;
public:
    class GradeTooHighException : public std::exception
    {
        const char * what() const _NOEXCEPT;
    };
    class GradeTooLowException : public std::exception
    {
        const char * what() const _NOEXCEPT;
    };
    Form();//default
    Form(std::string name, int toSign, int toExecute);
    Form(Form const & src);//copy
    Form & operator=(Form const & rhs);//assignation
    ~Form();//destructor
    std::string getName(void) const;
    int getGradeTosign(void) const;
    int getGradeToExecute(void) const;
    bool getSign(void) const;
    void beSigned(Bureaucrat const & target);
};

std::ostream & operator<<(std::ostream & o, Form const & rhs);

#endif
