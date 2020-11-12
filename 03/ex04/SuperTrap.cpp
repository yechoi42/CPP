/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yechoi <yechoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 15:17:58 by yechoi            #+#    #+#             */
/*   Updated: 2020/11/12 16:06:38 by yechoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap()
{
    this->_name = "user";
    this->_hit = FragTrap::_hit;
    this->_maxHit = FragTrap::_maxHit;
    this->_energy = NinjaTrap::_energy;
    this->_maxEnergy = NinjaTrap::_maxEnergy;
    this->_level = 1;
    this->_meleeDamage = NinjaTrap::_meleeDamage;
    this->_rangedDamage = FragTrap::_rangedDamage;
    this->_armorReduction = FragTrap::_armorReduction;
    std::cout << "aaa" << std::endl;
}

SuperTrap::SuperTrap(std::string name) 
    : NinjaTrap(name), FragTrap(name)
{
    _hit = FragTrap::_hit;
    _maxHit = FragTrap::_maxHit;
    _energy = NinjaTrap::_energy;
    _maxEnergy = NinjaTrap::_maxEnergy;
    _level = 1;
    _meleeDamage = NinjaTrap::_meleeDamage;
    _rangedDamage = FragTrap::_rangedDamage;
    _armorReduction = FragTrap::_armorReduction;
    std::cout << "bbb" << std::endl;
}

SuperTrap::SuperTrap(const SuperTrap & ref)
{
    *this = ref;
}

SuperTrap::SuperTrap& operator=(const SuperTrap & ref)
{
    _name = ref.FragTrap::_name;
    _hit = ref.FragTrap::_hit;
    _maxHit = ref.FragTrap::_maxHit;
    _energy = ref.NinjaTrap::_energy;
    _maxEnergy = ref.NinjaTrap::_maxEnergy;
    _level = ref.FragTrap::_level;
    _meleeDamage = ref.NinjaTrap::_meleeDamage;
    _rangedDamage = ref.FragTrap::_rangedDamage;
    _armorReduction = ref.FragTrap::_armorReduction;
    std::cout << "ccc" << std::endl;
    return (*this);    
}

SuperTrap::~SuperTrap()
{
    std::cout << "eee" <<std::endl;
}

unsigned int    SuperTrap::rangedAttack(std::string const & target)
{
    FragTrap::rangedAttack(target);
    return (FragTrap::_rangedDamage);
}

unsigned int    SuperTrap::meleeAttack(std::string const & target)
{
    NinjaTrap::meleeAttack(target);
    return (NinjaTrap::_meleeDamage);
}