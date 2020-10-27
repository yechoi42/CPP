#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->_name = name;
}

void    HumanB::setWeapon(Weapon club)
{
    this->_weapon = club;
}

void    HumanB::attack()
{
    std::cout << _name << " attacks with his " << _weapon.getType() << std::endl;
}