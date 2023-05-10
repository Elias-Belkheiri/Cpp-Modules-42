/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 06:09:09 by ebelkhei          #+#    #+#             */
/*   Updated: 2023/05/09 12:53:58 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
    std::cout << "Cat constructor called" << std::endl;
    type = "Cat";
    brain = new Brain ();
}

Cat::Cat(const Cat& other): brain(NULL)
{
    std::cout << "Cat copy constructor called" << std::endl;
    if (brain)
        delete brain;
    type = other.type;
    brain = new Brain (*other.brain);
}

Cat& Cat::operator=(const Cat& other)
{
    std::cout << "Cat assignment constructor called" << std::endl;
    if (this->brain)
        delete brain;
    this->brain = new Brain (*other.brain);
    this->type = other.type;
    return (*this);
}

Cat::~Cat(void)
{
    std::cout << "Cat destructor called" << std::endl;
    delete brain;
}

void Cat::makeSound() const
{
    std::cout << "meow 🐈" << std::endl;
}

void Cat::setIdeas(std::string idea) 
{
    if (brain)
        brain->setIdeas(idea);
}

const Brain& Cat::getBrain() const
{
    return (*brain);
}