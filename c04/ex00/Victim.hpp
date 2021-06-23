#ifndef VICTIM_H
#define VICTIM_H
#include <string>
#include <iostream>

class Victim 
{
protected:
    std::string name;
public:
    Victim(void);
    Victim(std::string name);
    Victim(Victim const & src);
    Victim & operator=(Victim const & rhs);
    std::string getName(void) const;
    virtual void getPolymorphed() const; 
    virtual ~Victim(void);
};

std::ostream & operator<<(std::ostream & o, Victim const & rhs);
#endif