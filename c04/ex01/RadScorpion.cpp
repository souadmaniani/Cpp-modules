#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion")
{
    std::cout << "* click click click *\n";
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
void RadScorpion::takeDamage(int amount)
{
   Enemy::takeDamage(amount);
}
