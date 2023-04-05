/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 18:14:58 by elias             #+#    #+#             */
/*   Updated: 2023/04/05 00:16:50 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::~Zombie()
{
    std::cout << "Tha Destructor has been called for " << name << std::endl;
}

Zombie::Zombie()
{
    std::cout << "The default Constructor has been called" << std::endl;
}


Zombie::Zombie(std::string _name)
{
    std::cout << "Constructor has been called" << std::endl;
    this->name = _name;
}

void Zombie::setName(std::string _name)
{
    this->name = _name;
}

void	Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}