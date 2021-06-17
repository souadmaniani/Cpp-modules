#ifndef ENEMY_H
#define ENEMY_H
#include <string>
#include <iostream>
class Enemy
{
protected:
    int HP;
    std::string type;
public:
    Enemy();//default
    Enemy(int hp, std::string const & type);
    Enemy(Enemy const & src);
    Enemy & operator=(Enemy const & rhs);
    virtual ~Enemy();//destructor
    std::string const & getType() const;
    int getHP() const;
    virtual void takeDamage(int);
};
#endif