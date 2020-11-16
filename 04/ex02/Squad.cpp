/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yechoi <yechoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 17:03:22 by yechoi            #+#    #+#             */
/*   Updated: 2020/11/16 17:15:21 by yechoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad()
{

}

Squad::Squad(const Squad &ref)
{
    
}

Squad& Squad::operator=(const Squad &ref)
{

}

Squad::~Squad()
{

}

int             Squad::getCount() const
{
}

ISpaceMarine*   Squad::getUnit(int idx) const
{
    for(int i = 0 ; i < idx ; i++)
    {

    }
}

int             Squad::push(ISpaceMarine* marine)
{
}