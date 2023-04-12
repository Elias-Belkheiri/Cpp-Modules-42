/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 06:34:16 by ebelkhei          #+#    #+#             */
/*   Updated: 2023/04/11 06:43:22 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
    std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
    std::cout << "WrongAnimal copy constructor called" << std::endl;
    this->type = other.type;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &other)
{
    std::cout << "WrongAnimal assignment operator called" << std::endl;
    this->type = other.type;
    return (*this);
}

WrongAnimal::~WrongAnimal(void)
{
    std::cout << "WrongAnimal destructor called" << std::endl;
}

void WrongAnimal::makeSound(void) const
{
    std::cout << "WrongAnimal made a sound" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return type;
}