/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yechoi <yechoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 17:44:16 by yechoi            #+#    #+#             */
/*   Updated: 2020/10/24 17:48:02 by yechoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

int     main(void)
{
    Zombie zombie("jwon", "walkers");
    zombie.announce();

    ZombieEvent event;
    event.setZombieType("runners");
    
    Zombie *zombie2 = event.newZombie("yechoi");
    zombie2->announce();
    delete(zombie2);
    
    event.randomChump();
}