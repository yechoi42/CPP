/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yechoi <yechoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 11:44:14 by yechoi            #+#    #+#             */
/*   Updated: 2020/11/22 11:39:57 by yechoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int     main(void)
{
    std::cout << "\033[1;31mFORM CLASS TEST\033[0m" << std::endl;

    Form formA("formA", 6, 100);
    Form formB("formB", 3, 100);
    Form formC("formC", 5, 40);
    Form formE("formE", 0, 40);
    Form formF("formF", 5, 151);
    Bureaucrat D("D", 5);
    std::cout << formA << formB << formC;
    try
    {
        formA.beSigned(D);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        formB.beSigned(D);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    formC = formA;
    std::cout << formA << formB << formC;
    return 0;
}