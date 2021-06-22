#ifndef CHARACTER_H
#define CHARACTER_H
#include "AWeapon.hpp"
#include "Enemy.hpp"
#include <string>
#include <iostream>
class Character
{
private:
    std::string name;
    int AP;
    AWeapon *weapon;
public:
    Character();//default
    Character(std::string const & name);
    Character(Character const & src);//copy
    Character & operator=(Character const & rhs);//assignation
    ~Character();//destructor
    int getAP() const;
    void setAP(int ap);
    AWeapon *getAWeapon() const;
    void recoverAP();
    void equip(AWeapon*);
    void attack(Enemy*);
    std::string const & getName() const;
};
std::ostream & operator<<(std::ostream & o, Character const & rhs);

#endif