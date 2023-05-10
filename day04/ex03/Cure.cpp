/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 15:32:22 by ebelkhei          #+#    #+#             */
/*   Updated: 2023/05/09 13:13:25 by ebelkhei         ###   ########.fr       */
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
    (void)other;
}

Cure& Cure::operator=(const Cure& other)
{
    std::cout << "Cure Assignment constructor called" << std::endl;
    (void)other;
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
    ICharacter *nl = 0;
    if (&target == nl)
        return ;
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}