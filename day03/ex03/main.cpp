/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 23:30:46 by ebelkhei          #+#    #+#             */
/*   Updated: 2023/04/11 00:32:39 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap monster("Hmeda");
    
    monster.guardGate();
    monster.highFivesGuys();
    monster.attack("shawshe3");
    monster.whoAmI();
}