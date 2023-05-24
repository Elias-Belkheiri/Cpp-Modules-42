/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 13:36:56 by ebelkhei          #+#    #+#             */
/*   Updated: 2023/05/24 09:06:42 by ebelkhei         ###   ########.fr       */
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

    // Span sp(10);
    // std::vector<int> vec;
    // for (int i = 0; i < 10; i++)
    //     vec.push_back(i);
    
    // try
    // {
    //     sp.addElements(vec.begin(), vec.end());
    //     sp.printVec(sp.getVec());
    // }
    // catch (std::exception &e)
    // {
    //     std::cout << e.what() << std::endl;
    // }
}