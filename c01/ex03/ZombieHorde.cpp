#include "ZombieHorde.hpp"

std::string zombies_names[6] = {
    "BITERS",
    "COLD BODIES",
    "CREEPER",
    "DEAD ONES",
    "GEEK",
    "LAMEBRAINS"
};

ZombieHorde::ZombieHorde() {
    std::cout << "\033[1;31m Default Constructor called for ZombieHorde\033[0m" << "\n";
}

int generate_random_number(void)
{
    int random;

    random = rand() % 6;
    return (random);
}

ZombieHorde::ZombieHorde(int N)
{
    int i;

    std::cout << "\033[1;31mConstructor called for ZombieHorde\033[0m" << "\n";
    i = -1;
	srand(time(NULL));
    Zombie *zombies = new Zombie[N];
    while (++i < N)
    {
        zombies[i].setName(zombies_names[generate_random_number()]);
        zombies[i].setType("Blue Walker");
        zombies[i].announce();
    }
    delete [] zombies;
}

ZombieHorde::~ZombieHorde()
{
    std::cout << "\033[1;31mDestructor called for ZombieHorde\033[0m" << "\n";
}
