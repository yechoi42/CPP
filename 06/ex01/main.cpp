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
    std::string s2;
};

void    *serialize(void)
{
    int i;
    Data *data = new Data;
    char alpha[] = "abcdefghijklmnopqrstuvwxyz";
    char alphanum[] = "0123456789abcdefghijklmnopqrstuvwxyz";

    for (i = 0; i < 8; i++)
        data->s1 += alpha[rand() % 25];
    for (i = 0; i < 8 ; i++)
        data->s2 += alphanum[rand() % 35];
    return (data);
}

Data    *deserialize(void *raw)
{
    return (reinterpret_cast<Data *>(raw));
}

int main(void)
{
    void    *data = serialize();
    Data    *des= deserialize(data);

    std::cout << des->s1 << std::endl;
    std::cout << des->s2 << std::endl;

    void    *data2 = serialize();
    Data    *des2= deserialize(data2);

    std::cout << des2->s1 << std::endl;
    std::cout << des2->s2 << std::endl;
}