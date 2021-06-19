#ifndef ICE_H
#define ICE_H
#include "AMateria.hpp"

class Ice : public AMateria
{
public:
    Ice();//default
    ~Ice();//destructor
    Ice(Ice const & src);//copy
    Ice & operator=(Ice const & rhs);//assignation
    AMateria* clone() const;
    void use(ICharacter& target);
};

#endif