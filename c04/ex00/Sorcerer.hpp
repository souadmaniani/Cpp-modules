#ifndef SORCERER_H
#define SORCERER_H
#include "Victim.hpp"
#include <string>
#include <iostream>

class Sorcerer 
{
private:
    std::string name;
    std::string title;
public:
    Sorcerer(void);
    Sorcerer(std::string name, std::string title);
    Sorcerer(Sorcerer const & src);
    Sorcerer & operator=(Sorcerer const & rhs);
    std::string getName(void) const;
    std::string getTitle(void) const;
    void polymorph(Victim const &) const;
    ~Sorcerer(void);
};

std::ostream & operator<<(std::ostream & o, Sorcerer const & rhs);
#endif