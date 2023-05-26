/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 16:47:14 by ebelkhei          #+#    #+#             */
/*   Updated: 2023/05/26 15:07:15 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char *argv[])
{
    Btc btc;
    if (argc != 2)
    {
        std::cout << "Usage: ./btc [file]" << std::endl;
        return (1);
    }

    std::ifstream db("data.csv"), input(argv[1]);
    if (!db.is_open() || !input.is_open())
    {
        std::cerr << "Error: could not open file" << std::endl;
        return (1);
    }

    try
    {
        btc.readDb(db);
        btc.readInput(input);
        // btc.printMap();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        return (1);
    }
}
