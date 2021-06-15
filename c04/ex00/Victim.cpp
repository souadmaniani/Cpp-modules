#include "Victim.hpp"
Victim::Victim(void)
{}
Victim::Victim(std::string name)
{
    this->name = name;
    std::cout << "Some random victim called ";
    std::cout << name << " just appeared!\n";
}
Victim::~Victim(void)
{
    std::cout << "Victim " << name;
    std::cout <<" just died for no apparent reason!\n";
}
Victim::Victim(Victim const & src)
{
    *this = src;
}
Victim & Victim::operator=(Victim const & rhs)
{
    this->name = rhs.name;
    return (*this);
}
std::string Victim::getName(void) const
{
    return this->name;
}

std::ostream & operator<<(std::ostream & o, Victim const & rhs)
{
    o << "I am ";
    o << rhs.getName();
    o << " and I like otters!\n";
    return (o);
}

void Victim::getPolymorphed() const
{
    std::cout << name << " has been turned into a cute little sheep!\n";
}