#include "Zombie.hpp"

Zombie::~Zombie()
{
    std::cout << name << " Destroyed !" << std::endl;
}

void Zombie::announce(void)
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string n)
{
    name = n;
}
