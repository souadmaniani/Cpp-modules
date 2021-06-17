#ifndef POWERFIST_H
#define POWERFIST_H
#include "AWeapon.hpp"

class PowerFist : public AWeapon
{
public:
    PowerFist(void);//default
    PowerFist(PowerFist const & src);//copy
    PowerFist & operator=(PowerFist const & rhs);//assignation operator
    ~PowerFist();//destructor
    void attack() const;
};

std::ostream & operator<<(std::ostream & o, PowerFist const & src);

#endif