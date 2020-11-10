/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yechoi <yechoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 17:01:24 by yechoi            #+#    #+#             */
/*   Updated: 2020/11/10 17:14:13 by yechoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP

#include "ClapTrap.hpp"

class NinjaTrap : public ClapTrap 
{
    public:
        NinjaTrap();
        NinjaTrap(std::string name);
        NinjaTrap(const NinjaTrap & ref);
        NinjaTrap& operator=(const NinjaTrap & ref);
        ~NinjaTrap();
        void   ninjaShoebox(void);
};

#endif