/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 16:47:02 by ebelkhei          #+#    #+#             */
/*   Updated: 2023/05/28 16:22:51 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <algorithm>
#include <iostream>
#include <stdlib.h>
#include <iomanip>
#include <fstream>
#include <string>
#include <map>

#define BAD_DATE 0
#define LARGE_NUM 1
#define SMALL_NUM 2
#define BAD_VALUE 3
#define GOOD 4

class Btc
{
    std::map<std::string, double> db;
    std::map<std::string, double> input;
    
    public:
        Btc();
        Btc(const Btc &other);
        ~Btc();

        Btc &operator=(const Btc &other);

        void    readDb(std::ifstream &db);
        void    readInput(std::ifstream &input);
        void    printMap();

        // Exceptions 
        class ParseError : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
};