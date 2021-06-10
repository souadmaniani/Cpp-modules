#include "Weapon.hpp"
#include <iostream>

class HumanB
{
    private:
        Weapon *weapon;
        std::string *name;
    public:
        HumanB();
        HumanB(std::string name);
        std::string getName(void);
        void setName(std::string &name);
        Weapon &getWeapon(void);
        void setWeapon(Weapon &weapon);
        void attack(void);
        ~HumanB();
};
