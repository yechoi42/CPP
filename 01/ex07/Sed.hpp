/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yechoi <yechoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 13:40:05 by yechoi            #+#    #+#             */
/*   Updated: 2020/10/29 16:10:12 by yechoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
# define SED_HPP

#include <fstream>
#include <iostream>
#include <string>

class Sed
{
    private:
		std::string filename;
    public:
		Sed(std::string str);
        void    	Replace(std::fstream &file,
						std::string const &s1, std::string const &s2);
};

#endif
