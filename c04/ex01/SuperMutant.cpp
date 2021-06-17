#include "SuperMutant.hpp"

SuperMutant::SuperMutant()
{
    std::cout << "Gaaah. Me want smash heads!\n";
    this->HP = 170;
    this->type = "Super Mutant";
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
void Enemy::takeDamage(int amount)
{
    if (HP - amount + 3 > 0)
        HP-=amount;
    else
        HP = 0;
}
