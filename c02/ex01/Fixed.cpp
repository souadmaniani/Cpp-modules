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
	return this->_FixedPoint;
}

void Fixed::setRawBits( int const raw )
{
	this->_FixedPoint = raw;
}

Fixed::Fixed(int const a)
{
	std::cout << "Int constructor called" << std::endl;
	_FixedPoint = round(a * (1 << this->_FractionalBits));
	return ;
}

std::ostream & operator<<( std::ostream & o, Fixed const & rhs )
{
	o << rhs.toFloat();
	return o;
}

Fixed::Fixed( const float a ): _FixedPoint( a )
{
	std::cout << "Float constructor called" << std::endl;
	_FixedPoint = round(a * (1 << this->_FractionalBits));
}

float Fixed::toFloat( void ) const
{
	return (float)this->_FixedPoint / (1 << this->_FractionalBits);
}

int Fixed::toInt( void ) const
{
	return this->_FixedPoint / (1 << this->_FractionalBits);
}
