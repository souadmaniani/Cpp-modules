#include "Ice.hpp"

Ice::Ice()
{
    type = "ice";
}
Ice::~Ice()
{

}
Ice::Ice(Ice const & src)
{
    *this = src;
}
Ice & Ice::operator=(Ice const & rhs)
{
    // While assigning a Materia to another,
    // copying the type doesn’t make
    // sense... !!!!!!!
    this->type = rhs.type;
    this->_xp = rhs._xp;
    return (*this);
}
AMateria* Ice::clone() const
{
    return (new Ice(*this));
}
void Ice::use(ICharacter& target)
{
    _xp +=10;
    // std::cout << "* shoots an ice bolt at " << target << " *\n";
}
