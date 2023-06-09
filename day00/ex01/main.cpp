/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 02:27:25 by elias             #+#    #+#             */
/*   Updated: 2023/04/06 17:23:44 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
    PhoneBook x;
	std::string in;
	while (1)
	{
		getline(std::cin, in);
		if (std::cin.eof())
			exit (1);
		if (in == "ADD")
			x.addContact();
		else if (in == "SEARCH")
			x.search();
		else if (in == "EXIT")
			exit(0);
		else
			std::cout << "Please enter one of the following commands: ADD, SEARCH or EXIT" << std::endl;
	}
}