/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 14:17:44 by ebelkhei          #+#    #+#             */
/*   Updated: 2023/05/17 15:03:24 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <limits>
#include <math.h>

class ScalarConverter
{
    public:
        ScalarConverter();
        ScalarConverter(const ScalarConverter &src);
        ScalarConverter &operator=(const ScalarConverter &rhs);
        ~ScalarConverter();

        static void    convert(std::string str);  
        static void    printChar(std::string str);
        static void    printInt(std::string str);
        static void    printFloat(std::string str);
        static void    printDouble(std::string str);
};

#endif