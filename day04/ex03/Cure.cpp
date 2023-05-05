/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 15:32:22 by ebelkhei          #+#    #+#             */
/*   Updated: 2023/05/05 16:07:10 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
    std::cout << "Cure Default constructor called" << std::endl;
    this->type = "cure";
}

Cure::Cure(const Cure& other)
{
    std::cout << "Cure Copy constructor called" << std::endl;
    this->type = other.type;
}

Cure& Cure::operator=(const Cure& other)
{
    std::cout << "Cure Assignment constructor called" << std::endl;
    if (this != &other)
        this->type = other.type;
    return (*this);
}

Cure::~Cure()
{
    std::cout << "Cure Destructor called" << std::endl;
}

AMateria* Cure::clone() const
{
    return (new Cure());
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}