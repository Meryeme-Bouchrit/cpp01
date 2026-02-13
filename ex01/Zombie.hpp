#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>
#include <iomanip>

class Zombie
{
    private:
        std::string name;
    public:
        Zombie(std::string name = "Default") : name(name) {}
        ~Zombie();
        void announce(void);
        void setName(std::string n);
};

#endif
