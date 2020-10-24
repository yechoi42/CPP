/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yechoi <yechoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 15:36:46 by yechoi            #+#    #+#             */
/*   Updated: 2020/10/24 16:17:21 by yechoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

#include <string>
#include <iostream>

class Pony
{
private:
    std::string	name;
	std::string gender;
	std::string age;
public:
    Pony(std::string name, std::string gender);
    ~Pony();
	void	getInfo(void);
};

#endif