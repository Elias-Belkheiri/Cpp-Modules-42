/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 01:16:45 by elias             #+#    #+#             */
/*   Updated: 2023/04/05 00:26:32 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void HumanB::attack()
{
    if (weapon && weapon->getType() != "")
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