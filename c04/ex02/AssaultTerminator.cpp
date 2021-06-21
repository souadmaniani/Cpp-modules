#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator()
{
    std::cout << "* teleports from space *\n";
}

AssaultTerminator::~AssaultTerminator()
{
    std::cout << "I'll be back...\n";
}
AssaultTerminator::AssaultTerminator(AssaultTerminator const & src)
{
    *this = src;
}

AssaultTerminator & AssaultTerminator::operator=(AssaultTerminator const & rhs)
{
    (void)rhs;
    return *this;
}

ISpaceMarine* AssaultTerminator::clone() const
{
    return (new AssaultTerminator(*this));
}
void AssaultTerminator::battleCry() const
{
    std::cout << "This code is unclean. PURIFY IT!\n";
}
void AssaultTerminator::rangedAttack() const
{
    std::cout << "* does nothing *\n";
}
void AssaultTerminator::meleeAttack() const
{
    std::cout << "* attacks with chainfists *\n";
}
