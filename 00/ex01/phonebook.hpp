/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yechoi <yechoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 20:23:02 by yechoi            #+#    #+#             */
/*   Updated: 2020/10/16 20:52:30 by yechoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "info.hpp"

class Phonebook
{
    private:
        int     num;
        Info    contact[8];
    public:
        Phonebook(void);
        void    addContact(void);
        void    searchContact(void);
};

#endif