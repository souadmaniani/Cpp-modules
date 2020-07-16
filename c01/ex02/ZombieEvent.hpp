#ifndef ZOMBIE_EVENT_HPP
# define ZOMBIE_EVENT_HPP
# include "Zombie.hpp"

class ZombieEvent
{
    public:
        ZombieEvent();
        ~ZombieEvent();
        void setZombieType(Zombie& instance, std::string type);
        Zombie* newZombie(std::string name);
        void randomChump(void);
};

#endif