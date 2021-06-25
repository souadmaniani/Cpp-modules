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
        const char * what() const noexcept;
    };
    class GradeTooLowException : public std::exception
    {
        const char * what() const noexcept;
    };
    Form();
    Form(std::string name, bool sign, int toSign, int toExecute);
    Form(Form const & src);
    Form & operator=(Form const & rhs);
    ~Form();
    std::string getName(void);
    int getGradeTosignForm(void);
    int getGradeToExecuteForm(void);
    bool getSign(void);
    void beSigned(Bureaucrat const & target);
};

std::ostream & operator<<(std::ostream & o, Form const & rhs);

#endif
