/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elias <elias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 01:16:45 by elias             #+#    #+#             */
/*   Updated: 2023/03/31 23:15:15 by elias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string _name, Weapon &_weapon) : name(_name), weapon(_weapon) {};

void HumanA::attack()
{
    if (weapon.getType() != "")
        std::cout << name << " attacks with their weapon " << weapon.getType() << std::endl;
    else
        std::cout << name << " has no weapon ):" << std::endl;
}
