/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yechoi <yechoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 21:21:11 by yechoi            #+#    #+#             */
/*   Updated: 2020/10/17 18:48:57 by yechoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Phonebook::Phonebook(void)
{
	num = 0;
	std::cout<<"A new phonebook is created!"<<std::endl;
}

void    Phonebook::addContact(void)
{
	Info	info;

	if (num >= 8)
	{
		std::cout<<"This phonebook is full :("<<std::endl;
		return ;
	}
	info.inputInfo();
	contact[num++] = info;
}

void    Phonebook::searchContact(void)
{
    
}