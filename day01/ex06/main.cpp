/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elias <elias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 22:52:12 by elias             #+#    #+#             */
/*   Updated: 2023/04/02 01:58:33 by elias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "Usage: harlFilter Level" << std::endl; // take care of the executable name
        return 1;
    }
    Harl h;

    h.complain(argv[1]);
    // h.complain("warning");
    // h.complain("lol");

    return 0;
}