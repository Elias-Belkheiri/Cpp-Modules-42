/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 06:09:09 by ebelkhei          #+#    #+#             */
/*   Updated: 2023/04/11 06:27:14 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
    std::cout << "Cat constructor called" << std::endl;
    type = "Cat";
}

Cat::Cat(const Cat& other)
{
    std::cout << "Cat copy constructor called" << std::endl;
    type = other.type;
}

Cat& Cat::operator=(const Cat& other)
{
    std::cout << "Cat assignment operator called" << std::endl;
    type = other.type;
    return (*this);
}

Cat::~Cat(void)
{
    std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "meow 🐈" << std::endl;
}
