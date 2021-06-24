#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <string>
#include <iostream>
#include <stdexcept>

class Bureaucrat
{
private:
    const std::string _name;
    int _grade;
public:
    class GradeTooHighException : public std::exception
    {
    public:
        virtual const char* what() const throw();
    };
    class GradeTooLowException : public std::exception
    {
    public:
        virtual const char* what() const throw();
    };

    Bureaucrat();
    Bureaucrat(std::string name, int grade);
    ~Bureaucrat();
    std::string const getName(void) const;
    int getGrade(void) const;
    void increment() ;
    void decrement();
};

std::ostream & operator<<(std::ostream & o, Bureaucrat const & rhs);

#endif