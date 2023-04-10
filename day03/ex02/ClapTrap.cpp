/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 02:04:03 by ebelkhei          #+#    #+#             */
/*   Updated: 2023/04/09 06:12:42 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
	hitPoints = 10;
	energyPoints = 10;
	attackDamage = 0;
}

ClapTrap::ClapTrap(std::string _name)
{
	std::cout << "ClapTrap overloading constructor called" << std::endl;
	name = _name;
	hitPoints = 10;
	energyPoints = 10;
	attackDamage = 0;
}

ClapTrap& ClapTrap::operator=(ClapTrap& other)
{
	std::cout << "ClapTrap overloading assignment operator called" << std::endl;
    name = other.name;
    hitPoints = other.hitPoints;
    energyPoints = other.energyPoints;
    attackDamage = other.attackDamage;
    return (*this);
}

ClapTrap::ClapTrap(ClapTrap& other)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
	this->name = other.name;
	this->hitPoints = other.hitPoints;
	this->energyPoints = other.energyPoints;
	this->attackDamage = other.attackDamage;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	if (energyPoints && attackDamage)
	{
		std::cout << "ClapTrap" << name << " attacks " << target << " causing " << attackDamage << " points of damage" << std::endl;
        energyPoints--;
    }
	else if (!energyPoints)
		std::cout << name << "no energy points to attack" << target << std::endl;
	else
		std::cout << name << " has no attack damage points to attack " << target << std::endl;
	
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (energyPoints)
	{
		std::cout << name << " repaired " << amount << " energy points" << std::endl;
        energyPoints--;
		hitPoints += amount;
    }
	else
		std::cout << name << "no energy points to repair" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << name << " lost " << amount << " damage points" << std::endl;
	hitPoints -= amount;
}
