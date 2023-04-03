/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elias <elias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 01:15:04 by elias             #+#    #+#             */
/*   Updated: 2023/03/31 23:19:27 by elias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
    std::string name;
    Weapon  *weapon;
    public:
        HumanB();
        HumanB(std::string name);
        void    setWeapon(Weapon &weapon);
        void    attack();
};

#endif