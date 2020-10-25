/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yechoi <yechoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 11:30:47 by yechoi            #+#    #+#             */
/*   Updated: 2020/10/25 13:03:47 by yechoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <stdexcept>

class ZombieHorde {
    private:
        Zombie  *zombies;
        int     N;
    public:
        ZombieHorde(int N);
        void    announce(void);
        ~ZombieHorde();
};