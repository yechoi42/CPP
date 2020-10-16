/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   info.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yechoi <yechoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 20:32:04 by yechoi            #+#    #+#             */
/*   Updated: 2020/10/16 21:10:29 by yechoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INFO_HPP
# define INFO_HPP

#include <iostream>
#include <iomanip>
#include <string>

class Info 
{
    private:
        std::string 	content[11];
    public:
		void	inputInfo(void);
		void	showInfo(void);
};

#endif