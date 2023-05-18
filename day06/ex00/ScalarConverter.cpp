/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 14:51:18 by ebelkhei          #+#    #+#             */
/*   Updated: 2023/05/18 09:29:43 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter &src) { (void)src;}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &rhs) { (void)rhs; return *this;}

ScalarConverter::~ScalarConverter() {}

void    ScalarConverter::convert(std::string str)
{
    std::cout << "char: ";
    printChar(str);
    std::cout << std::endl;

    std::cout << "int: ";
    printInt(str);
    std::cout << std::endl;

    std::cout << "float: ";
    printFloat(str);
    std::cout << std::endl;

    std::cout << "double: ";
    printDouble(str);
    std::cout << std::endl;
}

bool onlyDigits(std::string str)
{
    int d = 0;
    int f = 0;
    
    for (size_t i = 0; i < str.length(); i++)
    {
        if (i == 0 && (str[i] == '-' || str[i] == '+'))
            continue;
        if (str[i] == 'f' && !f)
        {
            f++;
            continue;
        }
        if (i && !d && str[i] == '.')
        {
            d++;
            continue;
        }
        if (!isdigit(str[i]))
            return false;
    }
    return true;
}

bool is_inf(std::string str)
{
    if (str == "-inff" || str == "+inff" || str == "nanf"
        || str == "-inf" || str == "+inf" || str == "nan")
        return true;
    return false;
}

void ScalarConverter::printDouble(std::string str)
{
    double i = atof(str.c_str());

    if (str == "-inf" || str == "+inf" || str == "nan")
        std::cout << str;
    else if ((!i && !isdigit(str[0]) && str[0] != '-' && str[0] != '+')
            || ((str[0] == '-' || str[0] == '+') && !isdigit(str[1]) && !i))
        std::cout << "impossible";
    else
    {
        if (!fmod(i, 1.0))
            std::cout << std::setprecision(1) << std::fixed;
        std::cout << static_cast<double>(i);
    }
}

void ScalarConverter::printFloat(std::string str)
{
    double i = atof(str.c_str());

    if (str == "-inff" || str == "+inff" || str == "nanf")
        std::cout << str;
    else if ((!i && !isdigit(str[0]) && str[0] != '-' && str[0] != '+')
            || ((str[0] == '-' || str[0] == '+') && !isdigit(str[1]) && !i)
            || i > std::numeric_limits<float>::max())
        std::cout << "impossible";
    else
    {
        if (!fmod(i, 1.0))
            std::cout << std::setprecision(1) << std::fixed;
        std::cout << static_cast<float>(i);
        std::cout << "f";
    }
}

void    ScalarConverter::printInt(std::string str)
{
    long int i = atol(str.c_str());

    if (str == "-inff" || str == "+inff" || str == "nanf"
        || str == "-inf" || str == "+inf" || str == "nan")
        std::cout << "impossible";
        
    else if ((!i && !isdigit(str[0]) && str[0] != '-' && str[0] != '+')
            || ((str[0] == '-' || str[0] == '+') && !isdigit(str[1]) && !i)
            || i > INT_MAX)

        std::cout << "impossible";
    else
        std::cout << i;
}

void    ScalarConverter::printChar(std::string str)
{
    char c;
    
    if (str.length() == 1 && !isdigit(str[0]))
        std::cout << "'" << str[0] << "'";
    else if (onlyDigits(str))
    {
        c = static_cast<char>(atoi(str.c_str()));
        if (!isprint(c))
            std::cout << "Non displayable";
        else
        std::cout << "'" << c << "'";
    }
    else
        std::cout << "impossible";
}