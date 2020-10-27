#include "Weapon.hpp"

Weapon::Weapon()
{
    _type = "fork";
}

Weapon::Weapon(std::string type)
{
    this->_type = type;
}

std::string const& Weapon::getType(void) const
{
    return (this->_type);
}

void    Weapon::setType(std::string type)
{
    this->_type = type;
}