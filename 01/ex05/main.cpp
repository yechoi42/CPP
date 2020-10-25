/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yechoi <yechoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 14:00:39 by yechoi            #+#    #+#             */
/*   Updated: 2020/10/25 15:19:02 by yechoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

int     main(void)
{
    Human bob;

    std::cout << bob.identify() <<std::endl;
    std::cout << bob.getBrain().identify() <<std::endl;
}