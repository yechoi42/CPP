/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yechoi <yechoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 22:56:05 by yechoi            #+#    #+#             */
/*   Updated: 2020/11/26 22:56:05 by yechoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template <typename T>
void    func(T &a)
{
    std::cout << a << ": Merry Christmas!" << std::endl;
}

int main(void)
{
    char arr1[3] = {'a', 'b', 'c'};
    iter(arr1, 3, func);

    int arr2[3] = {2, 4, 6};
    iter(arr2, 3, func);

    std::string arr3[3] = {"yeji", "jihyun", "zuno"};
    iter(arr3, 3, func);
}