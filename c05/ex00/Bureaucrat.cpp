#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat()
{
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	std::cout << "Constructor Bureaucrat\n";
	if (grade < 1)
		throw (GradeTooHighException());
	else if (grade > 150)
		throw (GradeTooLowException());
	else
		_grade = grade;
}

std::string const Bureaucrat::getName(void) const
{
	return this->_name;
}

int Bureaucrat::getGrade(void) const
{
	return this->_grade;
}

void Bureaucrat::increment()
{
	if (_grade - 1 < 1)
		throw (GradeTooHighException());
	else
		_grade -= 1;
}

void Bureaucrat::decrement()
{
	if (_grade + 1 < 1)
		throw (GradeTooLowException());
	else
		_grade +=1;
}

const char *Bureaucrat::GradeTooHighException::what() const _NOEXCEPT
{
	return ("Grade too high\n");
}

const char *Bureaucrat::GradeTooLowException::what() const _NOEXCEPT
{
	return ("Grade too low\n");
}

std::ostream & operator<<(std::ostream & o, Bureaucrat const & rhs)
{
	o << rhs.getName() << ",  bureaucrat grade " << rhs.getGrade() << ".\n";
	return o;
}
