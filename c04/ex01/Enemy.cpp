#include "Enemy.hpp"

Enemy::Enemy(void)
{}
Enemy::Enemy(int hp, std::string const & type)
{
    this->HP = hp;
    this->type = type;
}
Enemy::~Enemy()
{
}
Enemy::Enemy(Enemy const & src)
{
    *this = src;
}
Enemy & Enemy::operator=(Enemy const & rhs)
{
    this->HP = rhs.HP;
    this->type = rhs.type;
    return *this;
}

void Enemy::takeDamage(int amount)
{
    if (HP - amount > 0)
        HP-=amount;
    else
        HP = 0;
}
