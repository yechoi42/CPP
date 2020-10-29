/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yechoi <yechoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 12:30:42 by yechoi            #+#    #+#             */
/*   Updated: 2020/10/29 12:30:42 by yechoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->_name = name;
}

void    HumanB::setWeapon(Weapon &club)
{
    _weapon = &club;
}

void    HumanB::attack()
{
    std::cout << _name << " attacks with his " << _weapon->getType() << std::endl;
}