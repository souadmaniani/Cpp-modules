#ifndef CURE_H
#define CURE_H
#include "AMateria.hpp"
class Cure : public AMateria
{
private:
    /* data */
public:
    Cure();//default
    ~Cure();//destructor
    Cure(Cure const & src);//copy
    Cure & operator=(Cure const & rhs);//assignation
    AMateria* clone() const;
    void use(ICharacter& target);
};
#endif
