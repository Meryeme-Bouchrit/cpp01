#include "Zombie.hpp"

Zombie* newZombie(std::string name);
void randomChump(std::string name);

int main()
{
    Zombie* myZombie = newZombie("Kira");
    myZombie->announce();
    delete myZombie;

    randomChump("Luna");
    return 0;
}