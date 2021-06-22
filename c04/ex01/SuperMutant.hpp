#ifndef SUPERMUTANT_H
#define SUPERMUTANT_H
#include "Enemy.hpp"

class SuperMutant : public Enemy
{
public:
    SuperMutant();//default
    SuperMutant(SuperMutant const & src);//copy
    SuperMutant & operator=(SuperMutant const & rhs);//assignation
    ~SuperMutant();//destructor
    void takeDamage(int);
};

#endif