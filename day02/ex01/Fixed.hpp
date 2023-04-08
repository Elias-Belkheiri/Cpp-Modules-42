/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 17:39:04 by ebelkhei          #+#    #+#             */
/*   Updated: 2023/04/07 20:02:02 by ebelkhei         ###   ########.fr       */
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
        
};
    std::ostream& operator<<(std::ostream &out, const Fixed &_fixed);

#endif