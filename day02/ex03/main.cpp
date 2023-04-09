/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 18:21:19 by ebelkhei          #+#    #+#             */
/*   Updated: 2023/04/08 22:20:39 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main()
{
    Point a(0,0);
    Point b(20,0);
    Point c(10,30);
    Point d(10,15);
    Point x(20,30);
    if (bsp(a, b, c, d))
        std::cout << "inside" << std::endl;
    else
        std::cout << "outside" << std::endl;
    if (bsp(x, b, c, d))
        std::cout << "inside" << std::endl;
    else
        std::cout << "outside" << std::endl;
        
}