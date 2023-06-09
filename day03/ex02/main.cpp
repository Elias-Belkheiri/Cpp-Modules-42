/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 05:46:05 by ebelkhei          #+#    #+#             */
/*   Updated: 2023/04/11 00:29:02 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
    FragTrap x("hmeda");
    FragTrap y("3azouz");
    
    x.attack("3azouz");
    y.takeDamage(x.getAttackDamage());
    y.beRepaired(2);
    x.highFivesGuys();
}