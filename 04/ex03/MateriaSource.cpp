/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yechoi <yechoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 16:01:55 by yechoi            #+#    #+#             */
/*   Updated: 2020/11/17 16:43:57 by yechoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
    :_inventory({0, })
{
}

MateriaSource::MateriaSource(const MateriaSource& ref)
{
    *this = ref;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& ref)
{
    if (this == &ref)
        return (*this);
    for (int i = 0 ; i < 4; i++)
        _inventory[i] = ref._inventory[i];
    return (*this);
}

void        MateriaSource::learnMateria(AMateria* m)
{
    for (int i = 0; i < 4; i++)
    {
        if (_inventory[i] == 0)
            _inventory[i] = m;
    }
}

AMateria*   MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < 4; i++)
    {
        if (_inventory[i]->getType() == type)
            return (_inventory[i]->clone());
    }
    return (0);
}