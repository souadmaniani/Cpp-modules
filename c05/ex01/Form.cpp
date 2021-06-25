#include "Form.hpp"

Form::Form(std::string name, int toSign, int toExecute) :
_name(name), _gradeTosign(toSign), _gradeToExecute(toExecute)
{
    std::cout << "Constructor Form\n";
    if (_gradeTosign > 150 || _gradeToExecute > 150)
        throw (GradeTooLowException());
    else if (_gradeTosign < 1 || _gradeToExecute < 1)
        throw (GradeTooHighException());
    _sign = false;
}

Form::~Form()
{
}
Form::Form(Form const & src)
{
    *this = src;
}

std::string  Form::getName(void) const
{
    return (this->_name);
}
int Form::getGradeTosign(void) const
{
    return (this->_gradeTosign);
}
int Form::getGradeToExecute(void) const
{
    return (this->_gradeToExecute);
}
bool Form::getSign(void) const
{
    return this->_sign;
}
const char* Form::GradeTooLowException::what() const _NOEXCEPT
{
    return ("Grade is too low\n");
}
const char* Form::GradeTooHighException::what() const _NOEXCEPT
{
    return ("Grade is too high\n");
}

void Form::beSigned(Bureaucrat const & target)
{
    if (target.getGrade() <= _gradeTosign)
        this->_sign = true;
    else
        throw (GradeTooLowException());
}

std::ostream & operator<<(std::ostream & o, Form const & rhs)
{
    if (rhs.getSign())
        o << rhs.getName() << " was signed\n";
    else
        o << rhs.getName() << " is not signed yet\n";
    return (o);
}
