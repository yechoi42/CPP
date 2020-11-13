/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yechoi <yechoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 16:11:24 by yechoi            #+#    #+#             */
/*   Updated: 2020/11/13 16:55:11 by yechoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

#include <string>
#include <iostream>

class Victim
{
    protected:
        std::string _name;
    public:
        Victim();
        Victim(std::string name);
        Victim(const Victim & ref);
        Victim& operator=(const Victim & ref);
        ~Victim();
        std::string getName() const;
};

#endif