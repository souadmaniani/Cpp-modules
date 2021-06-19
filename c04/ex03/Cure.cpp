#include "Cure.hpp"

Cure::Cure()
{
    type = "ice";
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
    this->type = rhs.type;
    this->_xp = rhs._xp;
    return (*this);
}
AMateria* Cure::clone() const
{
    return (new Cure(*this));
}
void Cure::use(ICharacter& target)
{
    _xp +=10;
    // std::cout << "* heals "<< target << " ’s wounds *\n";
}
