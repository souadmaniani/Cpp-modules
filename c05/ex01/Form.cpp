#include "Form.hpp"

Form::Form(/* args */)
{
    sign = false;
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

}
void Form::beSigned(Bureaucrat & target)
{

}

std::ostream & operator<<(std::ostream & o, Form const & rhs)
{

}