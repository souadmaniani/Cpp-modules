#ifndef RADSCROPION_H
#define RADSCROPION_H
#include "Enemy.hpp"

class RadScorpion : public Enemy
{
public:
    RadScorpion();//default
    RadScorpion(RadScorpion const & src);//copy
    RadScorpion & operator=(RadScorpion const & rhs);//assignation
    virtual ~RadScorpion();//destructor
    void takeDamage(int);
};

#endif