/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yechoi <yechoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 16:33:42 by yechoi            #+#    #+#             */
/*   Updated: 2020/11/29 13:24:49 by yechoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {
    private: 
        std::string name;
        std::string type;
    public:
        Zombie();
        Zombie(std::string name, std::string type);
        void    announce(void);
        void    insertMembers(std::string name, std::string type);
};

#endif