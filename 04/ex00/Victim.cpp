/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yechoi <yechoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 16:11:19 by yechoi            #+#    #+#             */
/*   Updated: 2020/11/13 16:55:45 by yechoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim()
{
    _name = "Random";
    std::cout << "Some random victim called " << _name
        << " just appeared!" << std::endl;
}

Victim::Victim(std::string name)
{
    _name = name;
    std::cout << "Some random victim called " << _name
        << " just appeared!" << std::endl;
}

Victim::Victim(const Victim & ref)
{
    *this = ref;
}

Victim& Victim::operator=(const Victim & ref)
{
    _name = ref.getName();
    std::cout << "Some random victim called " << _name
        << " just appeared!" << std::endl;
    return (*this);
}

Victim::~Victim()
{
    std::cout << "Victim " << _name <<
        " just died for no apparent reason!" << std::endl;
}

std::string Victim::getName() const
{
    return (_name);
}