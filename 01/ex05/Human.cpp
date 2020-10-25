/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yechoi <yechoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 14:00:30 by yechoi            #+#    #+#             */
/*   Updated: 2020/10/25 15:18:55 by yechoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

const std::string    Human::identify() const
{
    return (brain.identify());
}

const Brain&         Human::getBrain() const
{
    const Brain& r = brain;
    return (r);
}