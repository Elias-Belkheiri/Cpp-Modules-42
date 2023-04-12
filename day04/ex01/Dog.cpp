/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 06:12:03 by ebelkhei          #+#    #+#             */
/*   Updated: 2023/04/11 07:41:04 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
    std::cout << "Dog constructor called" << std::endl;
    type = "Dog";
    brain = new Brain ();
}

Dog::Dog(const Dog& other)
{
    std::cout << "Dog copy constructor called" << std::endl;
    if (brain)
        delete brain;
    brain = new Brain ();
    *brain = *other.brain;
    type = other.type;
}

Dog& Dog::operator=(const Dog& other)
{
    std::cout << "Dog assignment operator called" << std::endl;
    if (brain)
    delete brain;
    brain = new Brain ();
    *brain = *other.brain;
    type = other.type;
    return (*this);
}


void Dog::makeSound() const
{
    std::cout << "3aw 3aw 🐕" << std::endl;
}

Dog::~Dog(void)
{
    std::cout << "Dog destructor called" << std::endl;
    delete brain;
}