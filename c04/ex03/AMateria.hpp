#ifndef AMATERIA_H
#define AMATERIA_H
#include "ICharacter.hpp"
#include <string>
#include <iostream>
class AMateria
{
protected:
    std::string type;
    unsigned int _xp;
public:
    AMateria(std::string const & type);
    AMateria();//default
    AMateria(AMateria const & src);//copy
    AMateria & operator=(AMateria const & rhs);//assignation
    virtual ~AMateria();//destructor
    std::string const & getType() const; //Returns the materia type
    unsigned int getXP() const; //Returns the Materia's XP
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
};

#endif