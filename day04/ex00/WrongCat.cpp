/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 06:37:52 by ebelkhei          #+#    #+#             */
/*   Updated: 2023/04/11 06:43:36 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
    std::cout << "WrongCat constructor called" << std::endl;
    type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& other)
{
    std::cout << "WrongCat copy constructor called" << std::endl;
    type = other.type;
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
    std::cout << "WrongCat assignment operator called" << std::endl;
    type = other.type;
    return (*this);
}

WrongCat::~WrongCat(void)
{
    std::cout << "WrongCat destructor called" << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << "WrongCat meow 🐈" << std::endl;
}
