/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yechoi <yechoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 16:21:39 by yechoi            #+#    #+#             */
/*   Updated: 2020/10/24 16:32:25 by yechoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void    memoryLeak()
{
    std::string*    panther = new std::string("String panther");

    std::cout << *panther << std::endl;
    delete panther;
}

int     main(void)
{
    memoryLeak();
}