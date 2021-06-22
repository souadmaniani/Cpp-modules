#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant")
{
    std::cout << "Gaaah. Me want smash heads!\n";
}

SuperMutant::~SuperMutant()
{
    std::cout << "Aaargh...\n";
}
SuperMutant::SuperMutant(SuperMutant const & src)
{
    *this = src;
}
SuperMutant & SuperMutant::operator=(SuperMutant const & rhs)
{
    this->HP = rhs.HP;
    this->type = rhs.type;
    return *this;
}
void SuperMutant::takeDamage(int amount)
{
    amount -=3;
    if (amount >= 0)
    {
        if (HP - amount > 0)
            HP-=amount;
        else
            HP = 0;
    }
}
