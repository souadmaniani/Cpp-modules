#ifndef CAT_H
#define CAT_H
#include "Victim.hpp"

class Cat : public Victim
{
public:
    Cat(void);
    Cat(std::string name);
    Cat(Cat const & src);
    Cat & operator=(Cat const & rhs);
    void getPolymorphed() const;
    virtual ~Cat(void);
};

#endif