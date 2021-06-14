#include "ZombieEvent.hpp"

std::string zombies_names[6] = {
    "BITERS",
    "COLD BODIES",
    "CREEPER",
    "DEAD ONES",
    "GEEK",
    "LAMEBRAINS"
};

ZombieEvent::ZombieEvent()
{
    std::cout << "\033[1;31mConstructor called for ZombieEvent\033[0m" << "\n";
}

ZombieEvent::~ZombieEvent()
{
    std::cout << "\033[1;31mDestructor called for ZombieEvent\033[0m" << "\n";
}

void ZombieEvent::setZombieType(Zombie& instance)
{
    instance.setType("Walking Dead");
}

Zombie* ZombieEvent::newZombie(std::string name)
{
    Zombie  *instance = new Zombie();
    setZombieType(*instance);
    instance->setName(name);
    return (instance);
}

void ZombieEvent::randomChump(void)
{
    int random;
    Zombie *instance;
    
    srand(time(NULL));
    random = rand() % 6;
    instance = this->newZombie(zombies_names[random]);
    instance->announce();
    delete instance;
}
