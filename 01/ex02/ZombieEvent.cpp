/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yechoi <yechoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 17:13:14 by yechoi            #+#    #+#             */
/*   Updated: 2020/10/24 17:49:42 by yechoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

void    ZombieEvent::setZombieType(std::string type)
{
    this->type = type;
}

Zombie* ZombieEvent::newZombie(std::string name)
{
    Zombie  *zombie = new Zombie(name, type);
    return (zombie);
}

void    ZombieEvent::randomChump(void)
{
    std::string     vowel = "aeiou";
    std::string     consonant = "bcdfghjklmnpqrstvwxz";
    std::string     name = "zomb";

    name[1] = consonant[rand()%20];
    name[2] = vowel[rand()%5];
    name[3] = consonant[rand()%20];
    name[4] = vowel[rand()%5];
    name[5] = '\0';

    Zombie  zombie(name, type);
    zombie.announce();
}
