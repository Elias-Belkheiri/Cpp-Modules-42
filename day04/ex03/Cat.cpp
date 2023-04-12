/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 06:09:09 by ebelkhei          #+#    #+#             */
/*   Updated: 2023/04/11 21:58:54 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
    std::cout << "Cat constructor called" << std::endl;
    type = "Cat";
    brain = new Brain ();
}

Cat::Cat(const Cat& other)
{
    std::cout << "Cat copy constructor called" << std::endl;
    if (brain)
        delete brain;
    brain = new Brain ();
    *brain = *other.brain;
    type = other.type;
}

Cat& Cat::operator=(const Cat& other)
{
    std::cout << "Cat assignment operator called" << std::endl;
    if (this->brain)
        delete brain;
    this->brain = new Brain ();
    *brain = *other.brain;
    this->type = other.type;
    return (*this);
}


void Cat::makeSound()
{
    std::cout << "meow 🐈" << std::endl;
}

Cat::~Cat(void)
{
    std::cout << "Cat destructor called" << std::endl;
    delete brain;
}

void Cat::setIdeas(std::string idea) 
{
    brain->setIdeas(idea);
}

const Brain& Cat::getBrain() const
{
    return (*brain);
}