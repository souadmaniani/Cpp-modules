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
 std::string const & Enemy::getType() const
 {
     return (this->type);
 }
int Enemy::getHP() const
{
    return (this->HP);
}
void Enemy::setHP(int hp)
{
    this->HP = hp;
}
void Enemy::takeDamage(int amount)
{
    if (amount >= 0)
    {
        if (HP - amount > 0)
            HP-=amount;
        else
            HP = 0;
    }
}
