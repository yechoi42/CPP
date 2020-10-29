/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yechoi <yechoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 14:46:12 by yechoi            #+#    #+#             */
/*   Updated: 2020/10/29 16:26:37 by yechoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

Sed::Sed(std::string str)
{
    filename = str + ".replace";
}

void        Sed::Replace(std::fstream &file,
                std::string const &s1, std::string const &s2)
{
    std::fstream            newfile;
    std::string             line;
    std::string::size_type  n;

    newfile.open(filename, std::fstream::out | std::fstream::trunc);
    if (!newfile.is_open())
         throw "Cannot Open New file";
    while (std::getline(file, line))
    {
        if ((n = line.find(s1, 0)) != std::string::npos)
            line.replace(n, s1.length(), s2);
        newfile << line;
        if (!file.eof())
            newfile << '\n';
    }
    newfile.close();
    file.close();
}