#include "RadScorpion.hpp"

RadScorpion::RadScorpion()
{
    std::cout << "* click click click *\n";
    this->HP = 80;
    this->type = "RadScorpion";
}

RadScorpion::~RadScorpion()
{
    std::cout << "* SPROTCH *\n";
}
RadScorpion::RadScorpion(RadScorpion const & src)
{
    *this = src;
}
RadScorpion & RadScorpion::operator=(RadScorpion const & rhs)
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
