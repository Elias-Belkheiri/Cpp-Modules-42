/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 15:22:08 by ebelkhei          #+#    #+#             */
/*   Updated: 2023/05/09 13:12:30 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{
    std::cout << "Ice Default constructor called" << std::endl;
    this->type = "ice";
}

Ice::Ice(const Ice& other)
{
    std::cout << "Ice Copy constructor called" << std::endl;
    (void)other;
}

Ice& Ice::operator=(const Ice& other)
{
    std::cout << "Ice Assignment constructor called" << std::endl;
    (void)other;
    return (*this);
}

Ice::~Ice()
{
    std::cout << "Ice Destructor called" << std::endl;
}

AMateria* Ice::clone() const
{
    return (new Ice());
}

void Ice::use(ICharacter& target)
{
    ICharacter *nl = 0;
    if (&target == nl)
        return ;
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}