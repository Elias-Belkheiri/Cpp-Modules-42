/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 17:39:04 by ebelkhei          #+#    #+#             */
/*   Updated: 2023/04/06 21:49:06 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CPP
#define FIXED_CPP

#include <iostream>

class Fixed
{
    private:
        int              fixed;
        static const int fractional_bits;
    public:
		Fixed();
		Fixed(const Fixed& _fixed);
		Fixed& operator = (const Fixed &_fixed);
		~Fixed();
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        
};

#endif