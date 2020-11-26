/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yechoi <yechoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 22:00:31 by yechoi            #+#    #+#             */
/*   Updated: 2020/11/24 22:00:31 by yechoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert(double input)
    :_input(input)
{
}

Convert::Convert(const Convert& ref)
{
    *this = ref;
}

Convert&    Convert::operator=(const Convert& ref)
{
    if (this == &ref)
        return (*this);
    _input = ref.getInput();
    return (*this);
}

Convert::~Convert()
{
}

double  Convert::getInput() const
{
    return (_input);
}

void    Convert::toChar()
{
    int integer;

    std::cout << "char: ";
    integer = static_cast<int>(_input);
    if (integer - _input != 0)
        throw Convert::ImpossibleException();
    else if (integer >= 32 && integer <= 126)
        std::cout << "'" << static_cast<char>(_input) << "'" << std::endl;
    else
        throw Convert::NonDisplayableException();
}

void    Convert::toInt()
{
    std::cout << "int: ";
    if (std::isnan(_input) || std::isinf(_input))
        throw Convert::ImpossibleException();
    std::cout << static_cast<int>(_input) << std::endl;
}

void    Convert::toFloat()
{
    int integer;

    std::cout << "float: ";
    std::cout << static_cast<float>(_input);

    integer = static_cast<int>(_input);
    if (integer - _input != 0)
        std::cout << "f" << std::endl;
    else
        std::cout << ".0f" << std::endl;
}

void    Convert::toDouble()
{
    int integer;

    std::cout << "double: ";
    std::cout << static_cast<double>(_input);

    integer = static_cast<int>(_input);
    if (integer - _input == 0)
        std::cout << ".0" ;
    std::cout << std::endl;
}

const char* Convert::ImpossibleException::what() const throw()
{
    return (" impossible");
}

const char* Convert::NonDisplayableException::what() const throw()
{
    return (" Non displayable");
}