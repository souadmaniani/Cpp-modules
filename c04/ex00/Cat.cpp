#include "Cat.hpp"

Cat::Cat(std::string cat_name) : Victim::Victim(cat_name)
{
    std::cout << "Meow meow.\n";
}
Cat::~Cat(void)
{
    std::cout << "Poor Cat died...\n";
}
Cat::Cat(Cat const & src)
{
    *this = src;
}
Cat & Cat::operator=(Cat const & rhs)
{
    this->name = rhs.name;
    return (*this);
}

void Cat::getPolymorphed() const
{
   std::cout << name << " has been turned into a green frog!\n";
}
