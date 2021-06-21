#ifndef MATERIASOURCE_H
#define MATERIASOURCE_H
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    
private:
    AMateria  **inventory;
public:
    MateriaSource();//default
    ~MateriaSource();//destructor
    MateriaSource(MateriaSource const & src);//copy
    MateriaSource & operator=(MateriaSource const & rhs);//assignation
    void learnMateria(AMateria* m);
    AMateria* createMateria(std::string const & type);
};
#endif