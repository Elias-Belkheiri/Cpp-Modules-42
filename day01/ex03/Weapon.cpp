/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 01:08:18 by elias             #+#    #+#             */
/*   Updated: 2023/04/07 17:16:30 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() {};

const std::string& Weapon::getType()
{
    const std::string& str = type;
    return (str);
}

void    Weapon::setType(std::string newType)
{
    type = newType;
}

Weapon::Weapon(std::string type)
{
    this->type = type;
}