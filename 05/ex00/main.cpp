/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yechoi <yechoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 11:44:14 by yechoi            #+#    #+#             */
/*   Updated: 2020/11/24 13:56:03 by yechoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int     main(void)
{
    std::cout << "\033[1;31mBUREAUCRAT CLASS TEST\033[0m" << std::endl;

    Bureaucrat Y;
    Bureaucrat A("A", 1);
    Bureaucrat B("B", 150);
    Bureaucrat *D;

    try
    {
        D = new Bureaucrat("D", 151);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << A << B;

    try
    {
        A.upGrade();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        B.downGrade();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    return 0;
}