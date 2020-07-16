#ifndef ZOMBIE_H
# define ZOMBIE_H
# include <string>
# include <iostream>

class Zombie
{
    public:
        Zombie();
        ~Zombie();
        std::string type;
        std::string name;
        void announce(void) const;     
};

#endif