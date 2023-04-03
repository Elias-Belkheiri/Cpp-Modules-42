/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elias <elias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 01:16:45 by elias             #+#    #+#             */
/*   Updated: 2023/03/31 23:19:46 by elias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void HumanB::attack()
{
    if (weapon->getType() != "")
        std::cout << name << " attacks with their weapon " << weapon->getType() << std::endl;
    else
        std::cout << name << " has no weapon ):" << std::endl;
}

HumanB::HumanB()
{
    weapon = NULL;
}

HumanB::HumanB(std::string name)
{
    weapon = NULL;
    this->name = name;
}

void    HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}