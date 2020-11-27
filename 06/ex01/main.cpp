/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yechoi <yechoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 17:34:05 by yechoi            #+#    #+#             */
/*   Updated: 2020/11/25 17:34:05 by yechoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

struct Data
{
    std::string s1;
    int         n;
    std::string s2;
};

void    *serialize(void)
{
    int     i;
    char    *ptr;
    char    alphanum[] = "0123456789abcdefghijklmnopqrstuvwxyz";

    srand(time(0));
    ptr = new char[20];
    for (i = 0; i < 8; i++)
        ptr[i] = alphanum[rand() % 35];
    *reinterpret_cast<int*>(ptr + 8) = rand();
    for (i = 12; i < 20 ; i++)
        ptr[i]= alphanum[rand() % 35];
    return (ptr);
}

Data    *deserialize(void *raw)
{
    Data *data = new Data;
    data->s1 = std::string(static_cast<char*>(raw), 8);
    data->n = *reinterpret_cast<int*>(static_cast<char*>(raw) + 8);
    data->s2 = std::string(static_cast<char*>(raw) + 12, 8);
    return (data);
}

int main(void)
{
    void    *data = serialize();
    Data    *des;

    des = deserialize(data);                                                                                                                                                                                                                                                                                                                                                                                                             = deserialize(data);

    std::cout << sizeof(*(Data*)des) << std::endl;
    std::cout << sizeof(des->s1) << std::endl;
    std::cout << sizeof(des->n) << std::endl;
    std::cout << sizeof(des->s2) << std::endl;
    std::cout << des->s1 << std::endl;
    std::cout << des->n << std::endl;
    std::cout << des->s2 << std::endl;
    delete des;
}