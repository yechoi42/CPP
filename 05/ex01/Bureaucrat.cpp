/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yechoi <yechoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 11:44:09 by yechoi            #+#    #+#             */
/*   Updated: 2020/11/21 21:06:44 by yechoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string &name, int grade)
    :_name(name), _grade(grade)
{
    if (_grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (_grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat& ref)
    : _name(ref.getName()), _grade(ref.getGrade())
{
    if (_grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (_grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& ref)
{
    if (this == &ref)
        return (*this);
    _grade = ref.getGrade();
    if (_grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (_grade > 150)
        throw Bureaucrat::GradeTooLowException();
    return (*this);
}

Bureaucrat::~Bureaucrat()
{
}

std::string         Bureaucrat::getName() const
{
    return (_name);
}

int                 Bureaucrat::getGrade() const
{
    return (_grade);
}

void            Bureaucrat::upGrade()
{
    _grade -= 1;
    if (_grade < 1)
        throw Bureaucrat::GradeTooHighException();
}

void            Bureaucrat::downGrade()
{
    _grade += 1;
    if (_grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("BureaucratException: Grade too High");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("BureaucratException: Grade too Low");
}

std::ostream&   operator<<(std::ostream &os, const Bureaucrat &ref)
{
    return (os << ref.getName() << ", bureaucrat grade " << ref.getGrade() << std::endl);
}
