/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yechoi <yechoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 16:05:42 by yechoi            #+#    #+#             */
/*   Updated: 2020/11/17 16:13:52 by yechoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void    ponyOnTheHeap(void)
{
    Pony *pony = new Pony("Hee-haw", "female");
    delete pony;
}

void    ponyOnTheStack(void)
{
    Pony pony("Whinny", "male");
}

int     main(void)
{
    std::cout<<"== pony on the heap =="<<std::endl;
    ponyOnTheHeap();
    std::cout<<"== pony on the stack =="<<std::endl;
    ponyOnTheStack();
    return (0);
}