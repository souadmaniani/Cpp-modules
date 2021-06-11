#include "ZombieEvent.hpp"

int main(void)
{
    Zombie zombie1("man", "ozakkare");
    zombie1.announce();
    Zombie zombie2("women", "smaniani");
    zombie2.announce();
    ZombieEvent zombieEvent;
    zombieEvent.setZombieType(zombie1, "boy");
    zombie1.announce();
    Zombie *instance;
    instance = zombieEvent.newZombie("ael-fadi");
    instance->announce();
    delete instance;
    zombieEvent.randomChump(zombieEvent);
}