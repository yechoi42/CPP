/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yechoi <yechoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 15:51:07 by yechoi            #+#    #+#             */
/*   Updated: 2020/10/24 16:20:29 by yechoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string name, std::string gender)
{
    this->name = name;
    this->gender = gender;
    std::cout<<"Pony named "<<this->name<<"("<<this->gender<<") is born."<<std::endl;
}

Pony::~Pony()
{
    std::cout<<"Pony named "<<this->name<<"("<<this->gender<<") is died."<<std::endl;
}