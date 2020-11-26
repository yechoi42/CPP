/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yechoi <yechoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 22:43:08 by yechoi            #+#    #+#             */
/*   Updated: 2020/11/26 22:43:08 by yechoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <string>
#include <iostream>

template <typename T>
void    iter(T *array, int len, void (*f)(T &ref))
{
    for (int i = 0; i < len; i++)
    {
        f(array[i]);
    }
}

#endif