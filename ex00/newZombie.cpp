#include "Zombie.hpp"
#include <iostream>
#include <string>

Zombie* newZombie(std::string name)
{
	Zombie*	p = new Zombie(name);
	return p;
}

