/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yechoi <yechoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 18:43:56 by yechoi            #+#    #+#             */
/*   Updated: 2020/11/07 19:58:07 by yechoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>

class Fixed
{
    private:
        int         fpoint;
        static int  fraction;
    public:
        Fixed();
        Fixed(const Fixed &ref);
        Fixed & operator = (const Fixed &ref); 
        ~Fixed();

        int     getRawBits(void) const;
        void    setRawBits(int const raw);
};
#endif