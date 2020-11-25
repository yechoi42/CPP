/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yechoi <yechoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 22:03:13 by yechoi            #+#    #+#             */
/*   Updated: 2020/11/24 22:03:13 by yechoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

#include <string>
#include <iostream>
#include <limits>
#include <cmath>

class Convert
{
    private:
        double _input;
        Convert();
    public:
        Convert(double input);
        Convert(const Convert& ref);
        Convert&    operator=(const Convert& ref);
        ~Convert();

        double  getInput() const;

        class ImpossibleException : public std::exception
        {
            public:
                virtual const char* what() const throw();

        };
        class NonDisplayableException : public std::exception
        {
            public:
                virtual const char* what() const throw();

        };

        void    toChar();
        void    toInt();
        void    toFloat();
        void    toDouble();
};

# endif