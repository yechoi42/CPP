/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yechoi <yechoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 13:41:20 by yechoi            #+#    #+#             */
/*   Updated: 2020/11/16 15:34:38 by yechoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant()
    : Enemy(70, "SuperMutant")
{
    std::cout << "Gaaah. Me want smash heads!" <<std::endl;
}

SuperMutant::SuperMutant(const SuperMutant &ref)
    : Enemy(ref)
{
    std::cout << "Gaaah. Me want smash heads!" <<std::endl; 
}

SuperMutant& SuperMutant::operator=(const SuperMutant & ref)
{
    if (this == &ref)
        return (*this);
    _hitPoint = ref.getHP();
    _type = ref.getType();
    return (*this);
}

SuperMutant::~SuperMutant()
{
    std::cout << "Aaargh..." << std::endl;
}

void            SuperMutant::takeDamage(int damage)
{
    damage -= 3;
    if (damage >= 0)
        _hitPoint -= damage;
}