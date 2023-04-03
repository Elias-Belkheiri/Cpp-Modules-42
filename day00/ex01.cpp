/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elias <elias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 02:27:25 by elias             #+#    #+#             */
/*   Updated: 2023/03/29 02:57:20 by elias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex01.hpp"

int main()
{
    PhoneBook x;
	std::string in;
	while (1)
	{
		getline(std::cin, in);
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