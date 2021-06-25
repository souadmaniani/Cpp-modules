#include "Form.hpp"

Form::Form(std::string name, bool sign, int toSign, int toExecute) :
_name(name), _gradeTosignForm(toSign), _gradeToExecuteForm(toExecute)
{
    _sign = false;
}

Form::~Form()
{
}

std::string Form::getName(void)
{
    return (this->_name);
}
int Form::getGradeTosignForm(void)
{
    return (this->_gradeTosignForm);
}
int Form::getGradeToExecuteForm(void)
{
    return (this->_gradeToExecuteForm);
}
bool Form::getSign(void)
{
    return this->_sign;
}
const char* Form::GradeTooLowException::what() const noexcept
{
    return ("Grade Too Low\n");
}
const char* Form::GradeTooHighException::what() const noexcept
{
    return ("Grade Too High\n");
}
void Form::beSigned(Bureaucrat const & target)
{
    if (target.getGrade() <= _gradeTosignForm)
        this->_sign = true;
    else
        throw (GradeTooLowException());

}

std::ostream & operator<<(std::ostream & o, Form const & rhs)
{

}