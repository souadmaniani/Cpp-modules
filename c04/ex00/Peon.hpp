#ifndef PEON_H
#define PEON_H
#include "Victim.hpp"

class Peon : public Victim
{
public:
    Peon(void);
    Peon(std::string name);
    Peon(Peon const & src);
    Peon & operator=(Peon const & rhs);
    ~Peon(void);
};

#endif