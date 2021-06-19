#ifndef TACTICALMARINE_H
#define TACTICALMARINE_H
#include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{
public:
    TacticalMarine();//default
    ~TacticalMarine();//destructor
    TacticalMarine(TacticalMarine const & src);//copy
    TacticalMarine & operator=(TacticalMarine const & rhs);//assignation
    ISpaceMarine* clone() const;
    void battleCry() const;
    void rangedAttack() const;
    void meleeAttack() const;
};

#endif