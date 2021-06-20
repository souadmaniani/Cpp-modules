#include "AMateria.hpp"

AMateria::AMateria(std::string const & type)
{
    this->type = type;
}
AMateria::AMateria()
{

}
AMateria::AMateria(AMateria const & src)
{
    *this = src;
}
AMateria & AMateria::operator=(AMateria const & rhs)
{
    this->_xp = rhs._xp;
    return (*this);
}
AMateria::~AMateria()
{

}
std::string const & AMateria::getType() const 
{
    return (this->type);
}
unsigned int AMateria::getXP() const 
{
    return (this->_xp);
}

void AMateria::use(ICharacter& target)
{
    (void)target;
    _xp += 10;
}
