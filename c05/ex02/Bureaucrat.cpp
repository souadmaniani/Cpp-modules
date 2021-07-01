#include "Bureaucrat.hpp"
#include "Form.hpp"

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

Bureaucrat::Bureaucrat(Bureaucrat const & src)
{
	*this = src;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & rhs)
{
	this->_grade = rhs.getGrade();
	return (*this);
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
	if (_grade + 1 > 150)
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

void Bureaucrat::signForm(Form & target)
{
	try
	{
		target.beSigned(*this);
		std::cout << this->getName() << " signs " << target.getName() << "\n";
	}
	catch(const std::exception& e)
	{
		std::cout << this->getName() << " cannot sign " << target.getName() ;
		std::cout << " because " << e.what();
	}
}
void Bureaucrat::executeForm(Form const & form)
{
	try
	{
		form.execute(*this);
		std::cout << this->getName() << " executes " << form.getName() << "\n";
	}
	catch(const std::exception& e)
	{
		std::cout << e.what();
		std::cout << this->getName() << " cannot execute " << form.getName() << "\n";
	}
}
