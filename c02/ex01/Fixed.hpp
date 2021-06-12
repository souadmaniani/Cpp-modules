#ifndef FIXED_H
# define FIXED_H
# include <iostream>
# include <cmath>

class Fixed
{
private:
   int _FixedPoint;
   static const int _FractionalBits = 8;
public:
    Fixed( void );
    ~Fixed( void );
    Fixed( Fixed const & src);
    Fixed & operator=( Fixed const & rhs);
    int getRawBits( void ) const;
    void setRawBits( int const raw );
    Fixed( int const a);
    Fixed( float const a );
    float toFloat( void ) const;
    int toInt( void ) const;
};

std::ostream & operator<<( std::ostream & o, Fixed const & rhs );

#endif