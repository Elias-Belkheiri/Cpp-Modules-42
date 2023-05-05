/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 15:12:24 by ebelkhei          #+#    #+#             */
/*   Updated: 2023/05/05 16:06:43 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
    std::cout << "Amateria constructor called" << std::endl;
}

AMateria::AMateria(std::string const & type) 
{
    std::cout << "Amateria Overload constructor called" << std::endl;
    this->type = type;
}

AMateria::AMateria(const AMateria& other)
{
    std::cout << "Amateria Copy constructor called" << std::endl;
    this->type = other.type;
}

AMateria&::AMateria::operator=(const AMateria& other)
{
    std::cout << "Amateria Assignment constructor called" << std::endl;
    if (this != &other)
        this->type = other.type;
    return (*this);
}

AMateria::~AMateria()
{
    std::cout << "Amateria Destructor called" << std::endl;
}

std::string const& AMateria::getType() const
{
    return (type);
}

void AMateria::use(ICharacter& target)
{
    (void)target;
}