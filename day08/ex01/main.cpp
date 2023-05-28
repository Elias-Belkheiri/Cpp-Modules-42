/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 13:36:56 by ebelkhei          #+#    #+#             */
/*   Updated: 2023/05/28 11:33:41 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int main()
{
    Span sp = Span(5);
    
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    
    try
    {
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    // Span sp(11000);
    // srand(time(NULL));
    // try
    // {
    //     for (int i = 0; i < 11000; i++)
    //         sp.addNumber(rand());
    //     std::cout << sp.shortestSpan() << std::endl;
    //     std::cout << sp.longestSpan() << std::endl;
    // }
    // catch (std::exception &e)
    // {
    //     std::cout << e.what() << std::endl;
    // }

    // std::deque<int> vec;
    // srand(time(NULL));
    
    // for (int i = 0; i < 13; i++)
    //     vec.push_back(rand() % 20);
    // Span sp(13);
    // try
    // {
    //     sp.addElements(vec.begin(), vec.end());
    //     sp.printVec();
    // }
    // catch (std::exception &e)
    // {
    //     std::cout << e.what() << std::endl;
    // }
}