/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elias <elias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 01:08:18 by elias             #+#    #+#             */
/*   Updated: 2023/03/31 23:13:07 by elias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

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
    // std::cout << "Overload Constructor have been called for weapon" << std::endl;
    this->type = type;
}