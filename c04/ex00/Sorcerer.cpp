#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title)
{
    this->name = name;
    this->title = title;
    std::cout << name << ", " << title << ", is born!\n";
}
Sorcerer::~Sorcerer(void)
{
    std::cout << name << ", " << title << ", is dead. Consequences will never be the same!\n";
}
Sorcerer::Sorcerer(Sorcerer const & src)
{
    *this = src;
}
Sorcerer & Sorcerer::operator=(Sorcerer const & rhs)
{
    this->name = rhs.name;
    this->title = rhs.title;
    return (*this);
}
std::string Sorcerer::getName(void) const
{
    return this->name;
}
std::string Sorcerer::getTitle(void) const
{
    return this->title;
}
std::ostream & operator<<(std::ostream & o, Sorcerer const & rhs)
{
    o << "I am ";
    o << rhs.getName();
    o << ", ";
    o << rhs.getTitle();
    o << ", and I like ponies!\n";
    return (o);
}

void Sorcerer::polymorph(Victim const & rhs) const
{
    std::cout << rhs.getName() ;
    std::cout << " has been turned into a pink pony!\n";
}
