/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 06:04:46 by ebelkhei          #+#    #+#             */
/*   Updated: 2023/04/11 21:57:28 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
    std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(const Animal &other)
{
    std::cout << "Animal copy constructor called" << std::endl;
    this->type = other.type;
}

Animal& Animal::operator=(const Animal &other)
{
    std::cout << "Animal assignment operator called" << std::endl;
    this->type = other.type;
    return (*this);
}

Animal::~Animal(void)
{
    std::cout << "Animal destructor called" << std::endl;
}

std::string Animal::getType() const
{
    return type;
}