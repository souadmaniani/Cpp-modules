#ifndef CHARACTER_H
#define CHARACTER_H
#include "ICharacter.hpp"
class Character : public ICharacter
{
private:
    std::string name;
    AMateria *inventory;
public:
    Character();//default
    Character(std::string name);
    Character(Character const & src);//copy
    Character & operator=(Character const & rhs);//assignation
    ~Character();//destructor
    std::string const & getName() const;
    void equip(AMateria* m);
    void unequip(int idx);
    void use(int idx, ICharacter& target);
    AMateria* getInventory(void) const;
    void setInventory(AMateria *inventory[4]);
};
std::ostream & operator<<(std::ostream & o, Character const & rhs);
#endif