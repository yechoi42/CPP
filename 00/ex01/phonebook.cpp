/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yechoi <yechoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 21:21:11 by yechoi            #+#    #+#             */
/*   Updated: 2020/10/18 17:40:53 by yechoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Phonebook::Phonebook(void)
{
	num = 0;
	std::cout<<"______________                   ______             ______  "<<std::endl;
	std::cout<<"___  __ \\__  /______________________  /________________  /__"<<std::endl;
	std::cout<<"__  /_/ /_  __ \\  __ \\_  __ \\  _ \\_  __ \\  __ \\  __ \\_  //_/"<<std::endl;
	std::cout<<"_  ____/_  / / / /_/ /  / / /  __/  /_/ / /_/ / /_/ /  ,<   "<<std::endl;
	std::cout<<"/_/     /_/ /_/\\____//_/ /_/\\___//_.___/\\____/\\____//_/|_|  "<<std::endl;
	std::cout<<std::endl;
}

void    Phonebook::addContact(void)
{
	if (num >= 8)
	{
		std::cout<<"This phonebook is full :("<<std::endl<<std::endl;
		return ;
	}
	contact[num++].inputInfo();
}

void    Phonebook::searchContact(void)
{
	int			i;
	int			choice;
	std::string	temp;

	i = 0;
	std::cout<<"index|first name|last name |nickname  "<<std::endl;
	std::cout<<"--------------------------------------"<<std::endl;
	while (i < num)
	{
		std::cout<<i<<"    |";
		contact[i++].showBriefInfo();
	}
	std::cout<<std::endl<<">>>>> Choose index: ";
	std::cin>>choice;
	if (choice < num && choice >= 0)
		contact[choice].showFullInfo();
	else
	{
		std::cout<<"Error: Wrong Index."<<std::endl;
		std::cin.ignore();
	}
}