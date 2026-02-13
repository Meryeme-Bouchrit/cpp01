#include "Weapon.hpp"

Weapon::Weapon(std::string t) : type(t) {}

Weapon::~Weapon() {}

const std::string& Weapon::getType() const
{
    return type;
}

void Weapon::setType(const std::string& t)
{
    type = t;
}
