/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yechoi <yechoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 12:51:35 by yechoi            #+#    #+#             */
/*   Updated: 2020/10/29 12:51:35 by yechoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>
#include <iostream>

class Weapon {
    private:
        std::string _type;
    public:
        Weapon();
        Weapon(std::string type);
        std::string const& getType(void);
        void    setType(std::string);
};

#endif