/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yechoi <yechoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 16:33:30 by yechoi            #+#    #+#             */
/*   Updated: 2020/10/24 17:48:32 by yechoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type)
{
    this->name = name;
    this->type = type;
}

void    Zombie::announce(void)
{
    std::cout<<"<"<<this->name<<" ("<<this->type<<")>";
    std::cout<<" Braiiiiiiinnnssss..."<<std::endl;
}