/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yechoi <yechoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 17:13:14 by yechoi            #+#    #+#             */
/*   Updated: 2020/10/29 18:32:38 by yechoi           ###   ########.fr       */
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

    name[0] = consonant[rand()%20];
    name[1] = vowel[rand()%5];
    name[2] = consonant[rand()%20];
    name[3] = vowel[rand()%5];
    name[4] = '\0';

    Zombie  zombie(name, type);
    zombie.announce();
}
