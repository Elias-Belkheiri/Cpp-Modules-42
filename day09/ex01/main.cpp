/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 17:02:19 by ebelkhei          #+#    #+#             */
/*   Updated: 2023/05/26 18:24:50 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPC.hpp"

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