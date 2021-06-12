#include "Fixed.hpp"

Fixed::Fixed( void ): _FixedPoint( 0 )
{
	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed( Fixed const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed & Fixed::operator=( Fixed const & rhs)
{
	std::cout << "Assignation operator called " << std::endl;
	this->_FixedPoint = rhs.getRawBits();
	return *this;
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_FixedPoint;
}

void Fixed::setRawBits( int const raw )
{
	this->_FixedPoint = raw;
}
