/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 17:39:04 by ebelkhei          #+#    #+#             */
/*   Updated: 2023/04/08 23:22:20 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CPP
#define FIXED_CPP

#include <iostream>
#include <cmath>

class Fixed
{
    private:
        int              fixed;
        static const int fractional_bits;
    public:
		Fixed();
		Fixed(const int _fixed);
		Fixed(const float _fixed);
		Fixed(const Fixed& _fixed);
		Fixed& operator = (const Fixed &_fixed);
		~Fixed();
        void	setRawBits( int const raw );
        int		getRawBits( void ) const;
        int		toInt( void ) const;
        float	toFloat( void ) const;
        static Fixed& min(Fixed& a, Fixed& b);
        static const Fixed& min(const Fixed& a, const Fixed& b);
        static Fixed& max(Fixed& a, Fixed& b);
        static const Fixed& max(const Fixed& a, const Fixed& b);
        
};
std::ostream& operator<<(std::ostream &out, const Fixed &_fixed);
// Comparison operators
int operator>(const Fixed &fixed_1, const Fixed &fixed_2);
int operator>=(const Fixed &fixed_1, const Fixed &fixed_2);
int operator<(const Fixed &fixed_1, const Fixed &fixed_2);
int operator<=(const Fixed &fixed_1, const Fixed &fixed_2);
int operator==(const Fixed &fixed_1, const Fixed &fixed_2);
int operator!=(const Fixed &fixed_1, const Fixed &fixed_2);
//Arithmetic operators
Fixed operator+(const Fixed &fixed_1, const Fixed &fixed_2);
Fixed operator-(const Fixed &fixed_1, const Fixed &fixed_2);
Fixed operator-(const Fixed &fixed_1) ;
Fixed operator*(const Fixed &fixed_1, const Fixed &fixed_2);
Fixed operator/(const Fixed &fixed_1, const Fixed &fixed_2);
// Increment and decrement operators
Fixed operator++(Fixed &fixed_1);
Fixed operator--(Fixed &fixed_1);
Fixed operator++(Fixed &fixed_1, int);
Fixed operator--(Fixed &fixed_1, int);

#endif