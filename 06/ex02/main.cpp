/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yechoi <yechoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 22:28:52 by yechoi            #+#    #+#             */
/*   Updated: 2020/11/25 22:28:52 by yechoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Base.hpp"

Base    *generate(void)
{
    Base    *p;
    int     num = rand() % 3;

    if (num == 0)
        return (p = new A);
    else if (num == 1)
        return (p = new B);
    else
        return (p = new C);
}

void    identify_from_pointer(Base *p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "This is A Class." << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "This is B Class." << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "This is C Class" << std::endl;
}

void    identify_from_reference(Base &p)
{
    try
    {
        Base &ref = dynamic_cast<A&>(p);
        (void)ref;
        std::cout << "This is A Class." << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        Base &ref = dynamic_cast<B&>(p);
        (void)ref;
        std::cout << "This is B Class." << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        Base &ref = dynamic_cast<C&>(p);
        (void)ref;
        std::cout << "This is C Class." << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

int     main(void)
{
    Base* p;

    p = generate();
    identify_from_pointer(p);
    identify_from_reference(*p);
}