/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yechoi <yechoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 20:52:39 by yechoi            #+#    #+#             */
/*   Updated: 2020/10/18 17:18:53 by yechoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

std::string    showPrompt(void)
{
    std::string cmd;

    std::cout<<"=============================================="<<std::endl;
    std::cout<<"Phonebook || input ADD, SEARCH or EXIT: ";
    std::getline(std::cin, cmd);
    std::cout<<"----------------------------------------------"<<std::endl;
    return (cmd);
}

int     main(void)
{
    int         exitFlag;
    std::string cmd;
    Phonebook   phonebook;

    exitFlag = 0;
    while (exitFlag == 0)
    {
        cmd = showPrompt();
        if (cmd == "ADD")
            phonebook.addContact();
        else if (cmd == "SEARCH")
            phonebook.searchContact();
        else if (cmd == "EXIT")
        {
            std::cout<<"deleting phonebook..."<<std::endl;
            exitFlag = 1;
        }
    }
    return (0);
}