#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) : _xp(0)
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
    std::cout << "AMateria: assignation operator\n";
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
