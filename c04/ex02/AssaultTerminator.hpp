#ifndef ASSAULTTERMINATOR_H
#define ASSAULTTERMINATOR_H
#include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{
public:
    AssaultTerminator();//default
    ~AssaultTerminator();//destructor
    AssaultTerminator(AssaultTerminator const & src);//copy
    AssaultTerminator & operator=(AssaultTerminator const & rhs);//assignation
    ISpaceMarine* clone() const;
    void battleCry() const;
    void rangedAttack() const;
    void meleeAttack() const;
};


#endif