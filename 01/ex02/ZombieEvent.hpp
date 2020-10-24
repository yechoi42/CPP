/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yechoi <yechoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 17:13:46 by yechoi            #+#    #+#             */
/*   Updated: 2020/10/24 17:43:46 by yechoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

class ZombieEvent {
    private:
        std::string type;
    public:
        void    setZombieType(std::string type);
        Zombie* newZombie(std::string name);
        void    randomChump();
};