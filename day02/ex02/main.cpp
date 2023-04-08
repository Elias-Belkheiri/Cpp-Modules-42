/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 21:50:12 by ebelkhei          #+#    #+#             */
/*   Updated: 2023/04/08 02:31:12 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main()
{
    Fixed a;
    Fixed c;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

    c.setRawBits(1);
    a = a + c;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
}

