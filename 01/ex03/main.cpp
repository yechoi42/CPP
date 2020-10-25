/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yechoi <yechoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 17:44:16 by yechoi            #+#    #+#             */
/*   Updated: 2020/10/25 13:12:35 by yechoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

int     main(int argc, char **argv)
{
    int     N;

    if (argc != 2)
        return (1);
    try
    {
        N = std::stoi(argv[1]);
        ZombieHorde zombieHorde = ZombieHorde(N);
        zombieHorde.announce();
        return (0);
    }
    catch(std::invalid_argument& e)
    {
        std::cerr << e.what() << '\n';
        return (1);
    }
}