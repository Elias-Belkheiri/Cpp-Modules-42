/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 05:46:05 by ebelkhei          #+#    #+#             */
/*   Updated: 2023/04/11 00:28:20 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    ScavTrap x("hmeda");
    ScavTrap y("Hamoda");
    
    x.attack("Hamoda");
    y.takeDamage(x.getAttackDamage());
    y.beRepaired(5);
    x.guardGate();
}