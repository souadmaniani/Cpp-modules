#ifndef PLASMARIFLE_H
#define PLASMARIFLE_H
#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
public:
    PlasmaRifle(void);//default
    PlasmaRifle(PlasmaRifle const & src);//copy
    PlasmaRifle & operator=(PlasmaRifle const & rhs);//assignation operator
    virtual ~PlasmaRifle();//destructor
    void attack() const;
};

std::ostream & operator<<(std::ostream & o, PlasmaRifle const & src);

#endif