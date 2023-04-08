/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 17:41:18 by ebelkhei          #+#    #+#             */
/*   Updated: 2023/04/06 21:50:11 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fractional_bits = 8;

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->fixed = 0;
}

Fixed::Fixed(const Fixed &_fixed)
{
    std::cout << "Copy constructor called" << std::endl;
    this->fixed = _fixed.fixed;
}

Fixed& Fixed::operator=(const Fixed &_fixed)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &_fixed)
        this->fixed =  _fixed.fixed;
    return *this;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const
{
    return this->fixed;
}

void Fixed::setRawBits( int const raw )
{
    this->fixed = raw;
}