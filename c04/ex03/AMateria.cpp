#include "AMateria.hpp"

AMateria::AMateria(std::string const & type)//done
{
    this->type = type;
}
AMateria::AMateria()//done
{

}
AMateria::AMateria(AMateria const & src)//done
{
    *this = src;
}
AMateria & AMateria::operator=(AMateria const & rhs)//done
{
    this->type = rhs.type;
    return (*this);
}
AMateria::~AMateria()
{

}
std::string const & AMateria::getType() const //done
{
    return (this->type);
}
unsigned int AMateria::getXP() const //done
{
    return (this->_xp);
}