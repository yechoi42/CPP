/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yechoi <yechoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 14:39:21 by yechoi            #+#    #+#             */
/*   Updated: 2020/11/29 11:29:11 by yechoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>

template <typename T>
int     easyfind(T t, int value)
{
    std::vector<T> v(t, t + sizeof(t) / sizeof(t[1]))
    std::vector<int>::iterator it = std::find(v.begin(), v.end(), value);


}

#endif