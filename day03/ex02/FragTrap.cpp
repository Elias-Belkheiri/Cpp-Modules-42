/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 02:51:30 by ebelkhei          #+#    #+#             */
/*   Updated: 2023/04/11 05:48:54 by ebelkhei         ###   ########.fr       */
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

FragTrap::FragTrap(FragTrap &fragtrap)
{
    std::cout << "FragTrap copy constructor called" << std::endl;
    this->name = fragtrap.name;
    this->hitPoints = fragtrap.hitPoints;
    this->energyPoints = fragtrap.energyPoints;
    this->attackDamage = fragtrap.attackDamage;
}

FragTrap& FragTrap::operator=(FragTrap &other)
{
    std::cout << "FragTrap assignment operator called" << std::endl;
    if (this!= &other)
    {
        this->name = other.name;
        this->hitPoints = other.hitPoints;
        this->energyPoints = other.energyPoints;
        this->attackDamage = other.attackDamage;
    }
    return (*this);
}

FragTrap::~FragTrap(void)
{
    std::cout << "FragTrap destructor called" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << name << ": this is a positive High fives "<< std::endl;
}