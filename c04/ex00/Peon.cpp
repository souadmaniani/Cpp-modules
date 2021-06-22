#include "Peon.hpp"

Peon::Peon(std::string peon_name) : Victim::Victim(peon_name)
{
    std::cout << "Zog zog.\n";
}
Peon::~Peon(void)
{
    std::cout << "Bleuark...\n";
}
Peon::Peon(Peon const & src)
{
    *this = src;
}
Peon & Peon::operator=(Peon const & rhs)
{
    this->name = rhs.name;
    return (*this);
}

void Peon::getPolymorphed() const
{
   std::cout << name << " has been turned into a pink pony!\n";
}
