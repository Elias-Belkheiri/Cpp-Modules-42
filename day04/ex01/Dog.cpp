/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 06:12:03 by ebelkhei          #+#    #+#             */
/*   Updated: 2023/05/09 12:54:06 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
    std::cout << "Dog constructor called" << std::endl;
    type = "Dog";
    brain = new Brain ();
}

Dog::Dog(const Dog& other): brain(NULL)
{
    std::cout << "Dog copy constructor called" << std::endl;
    if (brain)
        delete brain;
    brain = new Brain (*other.brain);
    type = other.type;
}

Dog& Dog::operator=(const Dog& other)
{
    std::cout << "Dog assignment operator called" << std::endl;
    if (brain)
        delete brain;
    brain = new Brain (*other.brain);
    type = other.type;
    return (*this);
}

Dog::~Dog(void)
{
    std::cout << "Dog destructor called" << std::endl;
    delete brain;
}

void Dog::makeSound() const
{
    std::cout << "3aw 3aw 🐕" << std::endl;
}


void Dog::setIdeas(std::string idea) 
{
    if (brain)
        brain->setIdeas(idea);
}

const Brain& Dog::getBrain() const
{
    return (*brain);
}