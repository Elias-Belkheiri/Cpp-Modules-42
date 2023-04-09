/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 02:04:03 by ebelkhei          #+#    #+#             */
/*   Updated: 2023/04/05 16:46:36 by ebelkhei         ###   ########.fr       */
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
	if (hitPoints > 0)
	{
		std::cout << name << " attacked" << target << std::endl;
		energyPoints--;
	}
	else
        std::cout << name << " has no hit points" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (hitPoints > 0)
	{
		std::cout << name << ": repaired itself with " << amount << "point" << std::endl;
		hitPoints += amount;
		energyPoints--;
	}
	else
        std::cout << name << " has no hit points" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << name << "took damage"< std::endl;
	attackDamage -= amount;

}
