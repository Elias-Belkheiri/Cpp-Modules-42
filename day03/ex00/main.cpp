/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 02:03:48 by ebelkhei          #+#    #+#             */
/*   Updated: 2023/04/09 02:08:16 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap clap("Hmeda");
    ClapTrap flap("rashid");

    clap.attack("rashid");
    flap.takeDamage(clap.getAttackDamage());
    flap.beRepaired(4);
}