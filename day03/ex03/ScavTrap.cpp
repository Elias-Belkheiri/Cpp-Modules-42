/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 02:51:30 by ebelkhei          #+#    #+#             */
/*   Updated: 2023/04/11 05:33:45 by ebelkhei         ###   ########.fr       */
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

ScavTrap::ScavTrap(ScavTrap &_scavtrap)
{
    std::cout << "ScavTrap copy constructor called" << std::endl;
    this->name = _scavtrap.name;
    this->hitPoints = _scavtrap.hitPoints;
    this->energyPoints = _scavtrap.energyPoints;
    this->attackDamage = _scavtrap.attackDamage;
}

ScavTrap &ScavTrap::operator = (ScavTrap const &scavtrap)
{
    std::cout << "ScavTrap overloading assignment operator called" << std::endl;
    this->name = scavtrap.name;
    this->hitPoints = scavtrap.hitPoints;
    this->energyPoints = scavtrap.energyPoints;
    this->attackDamage = scavtrap.attackDamage;
    return (*this);
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
    std::cout << "ScavTrap " << name << " is now in Gate keeper mode." << std::endl;
}