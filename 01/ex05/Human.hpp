/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yechoi <yechoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 14:00:37 by yechoi            #+#    #+#             */
/*   Updated: 2020/10/25 15:18:36 by yechoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

class Human
{
private:
    const Brain brain;
public:
    const std::string   identify() const;
    const Brain&         getBrain() const;    
};