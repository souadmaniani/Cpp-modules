#include "ZombieEvent.hpp"

int main(void)
{
    ZombieEvent inst;
    Zombie *instance;
    Zombie referc;
    instance = inst.newZombie("zizo");
    inst.setZombieType(referc, "radiation");
    instance->announce();
    delete instance;
}