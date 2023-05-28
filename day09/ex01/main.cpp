/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 17:02:19 by ebelkhei          #+#    #+#             */
/*   Updated: 2023/05/28 16:13:58 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char *argv[])
{
    std::list<int> list;
    if (argc != 2)
        return (1);
    if (!parse(argv[1]) || !fill_list(list, argv[1]))
    {
        std::cout << "Error" << std::endl;
        return (1);
    }
    std::cout << list.front() << std::endl;
}