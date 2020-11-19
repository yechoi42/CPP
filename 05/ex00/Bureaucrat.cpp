/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yechoi <yechoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 11:44:09 by yechoi            #+#    #+#             */
/*   Updated: 2020/11/19 12:06:22 by yechoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string &name, int grade)
{

}

Bureaucrat::Bureaucrat(const Bureaucrat& ref)
{

}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& ref)
{

}

Bureaucrat::~Bureaucrat()
{

}
    
std::string     Bureaucrat::getName() const
{
    return (_name);
}

int             Bureaucrat::getGrade() const
{
    return (_grade);
}

void            Bureaucrat::upGrade()
{

}

void            Bureaucrat::downGrade()
{

}

std::ostream&   Bureacrat::operator<<(std::ostream & out, const Bureaucrat & bureaucrat)
{
    
}