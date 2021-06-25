#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
{
    
}
ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
{
    this->sign = 145;
    this->exec = 137;
    this->target = target;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}
ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src)
{

}
ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs)
{

}
void ShrubberyCreationForm::executeAction()
{
    std::ofstream MyFile(target + "_shrubbery");
    MyFile << "Files can be tricky, but it is fun enough!";
    MyFile.close();
}
// void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
// {
//     try
//     {
//         if (executor.getGrade() <= this->sign && executor.getGrade() <= this->exec)

//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
    
// }