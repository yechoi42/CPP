/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yechoi <yechoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 13:59:35 by yechoi            #+#    #+#             */
/*   Updated: 2020/11/16 15:31:49 by yechoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion()
    : Enemy(80, "RadScorpion")
{
    std::cout << "*  click click click *" <<std::endl;
}

RadScorpion::RadScorpion(const RadScorpion &ref)
    : Enemy(ref)
{
    std::cout << "* click click click *" <<std::endl; 
}

RadScorpion& RadScorpion::operator=(const RadScorpion & ref)
{
    if (this == &ref)
        return (*this);
    _hitPoint = ref.getHP();
    _type = ref.getType();
    return (*this);
}

RadScorpion::~RadScorpion()
{
    std::cout << "* SPROTCH *" << std::endl;
}

void            RadScorpion::takeDamage(int damage)
{
    damage -= 3;
    if (damage >= 0)
        _hitPoint -= damage;
}