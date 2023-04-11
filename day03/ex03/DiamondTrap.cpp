/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 20:00:02 by ebelkhei          #+#    #+#             */
/*   Updated: 2023/04/10 23:32:35 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
    std::cout << "DiamondTrap constructor called" << std::endl;
    this->hitPoints = FragTrap::hitPoints;
    this->energyPoints = ScavTrap::energyPoints;
    this->attackDamage = FragTrap::attackDamage;
}

DiamondTrap::DiamondTrap(std::string _name)
{
    std::cout << "DiamondTrap overload constructor called" << std::endl;
    this->name = _name;
    ClapTrap::name = _name + "_clap_name";
    this->hitPoints = FragTrap::hitPoints;
    this->energyPoints = ScavTrap::energyPoints;
    this->attackDamage = FragTrap::attackDamage;
}

DiamondTrap::DiamondTrap(const DiamondTrap& diamondTrap)
{
    std::cout << "DiamondTrap copy constructor called" << std::endl;
    this->name = diamondTrap.name;
    ClapTrap::name = diamondTrap.name;
    this->hitPoints = diamondTrap.hitPoints;
    this->energyPoints = diamondTrap.energyPoints;
    this->attackDamage = diamondTrap.attackDamage;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& diamondTrap)
{
    std::cout << "DiamondTrap assignment operator called" << std::endl;
    this->name = diamondTrap.name;
    ClapTrap::name = diamondTrap.name;
    this->hitPoints = diamondTrap.hitPoints;
    this->energyPoints = diamondTrap.energyPoints;
    this->attackDamage = diamondTrap.attackDamage;
    return (*this);
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap destructor called" << std::endl;
}

void DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack(target);
}

void    DiamondTrap::whoAmI()
{
    std::cout << "My name: " << name << std::endl;
    std::cout << "ClapTrap name: " << ClapTrap::name << std::endl;
}