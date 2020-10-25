/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yechoi <yechoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 11:30:43 by yechoi            #+#    #+#             */
/*   Updated: 2020/10/25 13:47:27 by yechoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N)
{
    std::string     vowel = "aeiou";
    std::string     consonant = "bcdfghjklmnpqrstvwxz";
    std::string     name = "zomb";
	std::string		type[3] = {"walkers", "runners", "crawlers"};
    int             i;

	this->N = N;
	zombies = new Zombie[N];
    i = 0;
	while (i < N)
	{
		name[0] = consonant[rand()%20];
		name[1] = vowel[rand()%5];
		name[2] = consonant[rand()%20];
		name[3] = vowel[rand()%5];
		name[4] = '\0';

		zombies[i++].insertMembers(name, type[rand()%3]);
	}
	std::cout << N << " zombies are born!" << std::endl;
}

void		ZombieHorde::announce(void)
{
	int		i;

	i = 0;
	while (i < N)
		zombies[i++].announce();
}

ZombieHorde::~ZombieHorde()
{
	delete[] zombies;
	std::cout << N << " zombies died!" << std::endl;
}