#include "ZombieEvent.hpp"

int main(void)
{
    Zombie zombie1("man", "youssef");
    zombie1.announce();

    ZombieEvent zombieEvent;
    zombieEvent.setZombieType(zombie1);
    zombie1.announce();

    Zombie *instance;
    instance = zombieEvent.newZombie("ael-fadi");
    instance->announce();
    delete instance;

    zombieEvent.randomChump();
}