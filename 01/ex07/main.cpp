/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yechoi <yechoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 13:06:39 by yechoi            #+#    #+#             */
/*   Updated: 2020/10/29 16:20:03 by yechoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

int     main(int argc, char **argv)
{
    std::fstream    file;

    if (argc != 4 || !*argv[2] || !*argv[3])
    {
        std::cout << "Error: Invalid arguments" << std::endl;
        return (1);
    }
    file.open(argv[1]);
    if (!file.is_open())
    {
        std::cout << "Error: Invalid file" << std::endl;
        return (1);
    }
    try
    {
        Sed sed(argv[1]);
        sed.Replace(file, argv[2], argv[3]);
    }
    catch(char const *e)
    {
        std::cerr << "Error: " << e << std::endl;
    }
    return (0);
}