
// After this, you will create a ZombieEvent class. It will have a setZombieType 
// function, that will store a type in the object, and a function 
// Zombie* newZombie(std::string name) that will create a Zombie
//  with the chosen type, name it, and return it.
#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent()
{
    std::cout << "Constructor called" << std::endl;
}

ZombieEvent::~ZombieEvent()
{
    std::cout << "Destructor called" << std::endl;
}

void ZombieEvent::setZombieType(Zombie& instance, std::string type)
{
    instance.type = type;
}

Zombie* ZombieEvent::newZombie(std::string name)
{
    Zombie  *instance = new Zombie();
    setZombieType(instance, "medical");
    instance->name = name;
    return (instance);
}

void ZombieEvent::randomChump(void)
{
    Zombie  instance;
    instance.name = "zozo";
    std::cout << "I am " << instance.name << std::endl;
}
