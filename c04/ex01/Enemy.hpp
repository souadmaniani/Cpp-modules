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
    Enemy(Enemy const & src);//copy
    Enemy & operator=(Enemy const & rhs);//assignation
    virtual ~Enemy();//destructor
    std::string const & getType() const;
    int getHP() const;
    void setHP(int hp);
    virtual void takeDamage(int);
};
#endif
