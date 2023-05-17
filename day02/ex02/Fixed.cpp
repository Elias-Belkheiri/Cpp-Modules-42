/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 17:41:18 by ebelkhei          #+#    #+#             */
/*   Updated: 2023/05/17 12:30:33 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fractional_bits = 8;

Fixed::Fixed()
{
    // std::cout << "Default constructor called" << std::endl;
    this->fixed = 0;
}

Fixed::Fixed(const int _fixed)
{
    // std::cout << "Int constructor called" << std::endl;
    this->fixed = _fixed * (1 << fractional_bits);
}

Fixed::Fixed(const float _fixed)
{
    // std::cout << "Float constructor called" << std::endl;
    this->fixed = static_cast<int>(roundf(_fixed * (1 << fractional_bits)));
}

Fixed::Fixed(const Fixed &_fixed)
{
    // std::cout << "Copy constructor called" << std::endl;
    this->fixed = _fixed.fixed;
}

Fixed& Fixed::operator=(const Fixed &_fixed)
{
    // std::cout << "Copy assignment operator called" << std::endl;
    if (this != &_fixed)
        this->fixed =  _fixed.getRawBits();
    return *this;
}

Fixed::~Fixed()
{
    // std::cout << "Destructor called" << std::endl;
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

// Comparison operators
int operator > (const Fixed &fixed_1, const Fixed &fixed_2)
{
    return fixed_1.getRawBits() > fixed_2.getRawBits();
}

int operator>=(const Fixed &fixed_1, const Fixed &fixed_2)
{
    return fixed_1.getRawBits() >= fixed_2.getRawBits();
}

int operator < (const Fixed &fixed_1, const Fixed &fixed_2)
{
    return fixed_1.getRawBits() < fixed_2.getRawBits();
}

int operator<=(const Fixed &fixed_1, const Fixed &fixed_2)
{
    return fixed_1.getRawBits() <= fixed_2.getRawBits();
}

int operator == (const Fixed &fixed_1, const Fixed &fixed_2)
{
    return fixed_1.getRawBits() == fixed_2.getRawBits();
}

int operator != (const Fixed &fixed_1, const Fixed &fixed_2)
{
    return fixed_1.getRawBits() != fixed_2.getRawBits();
}

//Arithmetic operators
Fixed operator+(const Fixed &fixed_1, const Fixed &fixed_2)
{
    Fixed a;

    a.setRawBits(fixed_1.getRawBits() + fixed_2.getRawBits());
    return a;
}

Fixed operator-(const Fixed &fixed_1, const Fixed &fixed_2)
{
    Fixed a;

    a.setRawBits(fixed_1.getRawBits() - fixed_2.getRawBits());
    return a;
}

Fixed operator-(const Fixed &fixed_1)
{
    Fixed a;

    a.setRawBits((fixed_1.getRawBits()) * -1);
    return a;
}

Fixed operator*(const Fixed &fixed_1, const Fixed &fixed_2)
{
    Fixed a;

    a.setRawBits((fixed_1.getRawBits() * fixed_2.getRawBits()) >> 8);
    return a;
}

Fixed operator/(const Fixed &fixed_1, const Fixed &fixed_2)
{
    Fixed a;

    a.setRawBits(fixed_1.getRawBits() / fixed_2.getRawBits() << 8);
    return a;
}
// Increment and decrement operators
Fixed operator++(Fixed &fixed_1)
{
    fixed_1.setRawBits(fixed_1.getRawBits() + 1);
    return fixed_1;
}

Fixed operator++(Fixed &fixed_1, int)
{
    Fixed tmp = fixed_1;
    fixed_1.setRawBits(fixed_1.getRawBits() + 1);
    return tmp;
}

Fixed operator--(Fixed &fixed_1)
{
    fixed_1.setRawBits(fixed_1.getRawBits() - 1);
    return fixed_1;
}

Fixed operator--(Fixed &fixed_1, int)
{
    Fixed tmp = fixed_1;
    fixed_1.setRawBits(fixed_1.getRawBits() - 1);
    return tmp;
}

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
    if (a < b)
        return  a;
    return b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
    if (a < b)
        return  a;
    return b;
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
    if (a < b)
        return  b;
    return a;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
    if (a < b)
        return  b;
    return a;
}