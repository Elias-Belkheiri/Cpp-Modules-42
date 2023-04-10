/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 02:51:30 by ebelkhei          #+#    #+#             */
/*   Updated: 2023/04/10 00:01:07 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
    std::cout << "ScavTrap default constructor called" << std::endl;
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name)
{
    std::cout << "ScavTrap " << name << " constructor called" << std::endl;
    this->name = name;
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "ScavTrap destructor called" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (energyPoints && attackDamage)
	{
		std::cout << "ScavTrap " << name << " attacks " << target << " causing " << attackDamage << " points of damage" << std::endl;
        energyPoints--;
    }
	else if (!energyPoints)
		std::cout << name << "no energy points to attack" << target << std::endl;
	else
		std::cout << name << " has no attack damage points to attack " << target << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << " ScavTrap " << name << " is now in Gate keeper mode." << std::endl;
}