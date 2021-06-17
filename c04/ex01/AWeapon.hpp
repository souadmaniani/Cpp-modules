#ifndef AWEAPON_H
#define AWEAPON_H
#include <string>
#include <iostream>

class AWeapon
{
protected:
    std::string name;
    int damage;
    int APCost;
public:
    AWeapon();//default
    AWeapon(std::string const & name, int apcost, int damage);
    AWeapon(AWeapon const & src);//copy
    AWeapon & operator=(AWeapon const & rhs);//assignation operator
    virtual ~AWeapon();//destructor
    std::string const & getName() const;
    int getAPCost() const;
    int getDamage() const;
    virtual void attack() const = 0;
};
#endif