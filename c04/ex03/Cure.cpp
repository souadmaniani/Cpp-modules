#include "Cure.hpp"

Cure::Cure(): AMateria("cure")
{

}
Cure::~Cure()
{

}
Cure::Cure(Cure const & src)
{
    *this = src;
}
Cure & Cure::operator=(Cure const & rhs)
{
    this->_xp = rhs._xp;
    return (*this);
}
AMateria* Cure::clone() const
{
    return (new Cure(*this));
}
void Cure::use(ICharacter& target)
{
    AMateria::use(target);
    std::cout << "* heals "<< target.getName() << "’s wounds *\n";
}
