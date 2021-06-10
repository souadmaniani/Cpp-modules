#include "Weapon.hpp"
#include <iostream>
class HumanA
{
    private:
        Weapon &weapon;
        std::string name;
    public:
        HumanA(std::string name, Weapon &weapon);
        std::string getName(void);
        Weapon &getWeapon(void) const;
        void attack(void);
        ~HumanA();
};
