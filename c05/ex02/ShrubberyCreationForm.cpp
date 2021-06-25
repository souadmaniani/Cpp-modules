#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
{
    
}
ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137), target(target)
{
    std::cout << "Constructor ShrubberyCreationForm\n";
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}
ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src)
{
    *this = src;
}
ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs)
{
    this->target = rhs.target;
    return (*this);
}
//  write ASCII trees inside the file
void ShrubberyCreationForm::executeAction(Bureaucrat const & executor) const
{
    execute(executor);
    std::ofstream MyFile(target + "_shrubbery");
    MyFile << " ************************";
    MyFile.close();
}
