/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yechoi <yechoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 20:52:39 by yechoi            #+#    #+#             */
/*   Updated: 2020/10/16 21:20:52 by yechoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

std::string    showPrompt(void)
{
    std::string cmd;

    std::cout<<"Yechoi's Phonebook || input ADD, SEARCH or EXIT"<<std::endl;
    std::getline(std::cin, cmd);
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
            exitFlag = 1;
    }
}