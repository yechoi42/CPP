/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yechoi <yechoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 13:48:14 by yechoi            #+#    #+#             */
/*   Updated: 2020/10/25 13:59:13 by yechoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int     main(void)
{
    std::string str = "HI THIS IS BRAIN";
    std::string *p = &str;
    std::string &r = str;

    std::cout<<"===print string==="<<std::endl;
    std::cout<<str<<std::endl;
    std::cout<<"===print pointer==="<<std::endl;
    std::cout<<*p<<std::endl;
    std::cout<<"===print reference==="<<std::endl;
    std::cout<<r<<std::endl;
}