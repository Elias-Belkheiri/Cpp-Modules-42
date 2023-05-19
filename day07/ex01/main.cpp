/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 11:40:01 by ebelkhei          #+#    #+#             */
/*   Updated: 2023/05/19 15:01:32 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void addTwo(const int &n)
{
    std::cout << n + 2 << std::endl;
}

void upperPrint(const char &c)
{
    std::cout << (char)toupper(c) << std::endl;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    char str[] = "hello";

    iter<int>(arr, 5, addTwo);
    std::cout << std::endl;
    iter<char>(str, 5, upperPrint);

    return (0);
}