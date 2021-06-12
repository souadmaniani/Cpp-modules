#ifndef FIXED_H
# define FIXED_H
# include <iostream>

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
};

#endif