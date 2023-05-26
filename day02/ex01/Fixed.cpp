/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 17:41:18 by ebelkhei          #+#    #+#             */
/*   Updated: 2023/05/26 12:08:25 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fractional_bits = 8;

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->fixed = 0;
}

Fixed::Fixed(const int _fixed)
{
    std::cout << "Int constructor called" << std::endl;
    this->fixed = _fixed * (1 << fractional_bits);
}

Fixed::Fixed(const float _fixed)
{
    std::cout << "Float constructor called" << std::endl;
    this->fixed = static_cast<int>(roundf(_fixed * (1 << fractional_bits)));
}

Fixed::Fixed(const Fixed &_fixed)
{
    std::cout << "Copy constructor called" << std::endl;
    this->fixed = _fixed.fixed;
}

Fixed& Fixed::operator=(const Fixed &_fixed)
{
    std::cout << "Copy assignment operator called" << std::endl;
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

float Fixed::toFloat( void ) const
{
    return (static_cast<float>(fixed) / 256);
}

int Fixed::toInt( void ) const
{
    return (this->fixed / 256);
}

std::ostream &operator<<(std::ostream &out, const Fixed &_fixed)
{
    out << _fixed.toFloat();
    return out;
}