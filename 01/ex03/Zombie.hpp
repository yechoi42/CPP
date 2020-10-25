/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yechoi <yechoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 16:33:42 by yechoi            #+#    #+#             */
/*   Updated: 2020/10/25 13:10:06 by yechoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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