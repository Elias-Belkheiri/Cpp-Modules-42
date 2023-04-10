/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 02:51:30 by ebelkhei          #+#    #+#             */
/*   Updated: 2023/04/10 00:01:01 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
    std::cout << "FragTrap default constructor called" << std::endl;
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
}

FragTrap::FragTrap(std::string name)
{
    std::cout << "FragTrap " << name << " constructor called" << std::endl;
    this->name = name;
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
}

FragTrap::~FragTrap(void)
{
    std::cout << "FragTrap destructor called" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
    if (energyPoints && attackDamage)
	{
		std::cout << "FragTrap " << name << " attacks " << target << " causing " << attackDamage << " points of damage" << std::endl;
        energyPoints--;
    }
	else if (!energyPoints)
		std::cout << name << "no energy points to attack" << target << std::endl;
	else
		std::cout << name << " has no attack damage points to attack " << target << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << name << ": this is a positive High fives "<< std::endl;
}