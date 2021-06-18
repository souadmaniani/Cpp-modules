#ifndef SQUAD_H
#define SQUAD_H
#include "ISquad.hpp"

class Squad : public ISquad
{
private:
    int count;
    ISpaceMarine** units;
    ISpaceMarine** copy_table(ISpaceMarine** dst, ISpaceMarine** src);
public:
    Squad();//default
    ~Squad();//destructor
    Squad(Squad const & src);//copy
    Squad & operator=(Squad const & rhs);//assignation
   int getCount() const;
   ISpaceMarine* getUnit(int) const;
   int push(ISpaceMarine*);
};

#endif