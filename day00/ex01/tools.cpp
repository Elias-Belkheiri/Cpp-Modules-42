/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 20:03:34 by ebelkhei          #+#    #+#             */
/*   Updated: 2023/04/05 18:00:35 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	print_ten_wide(std::string str)
{
	int i;

	i = str.length();
	if (i > 10)
        std::cout << str.substr(0, 9) << ".";
	else
	{
		while (i++ < 10)
			std::cout << " ";
		std::cout << str;
	}
	std::cout << "|";
	
}

void	printContact(Contact contact, int i)
{
		std::cout << "         " << i << "|";
		print_ten_wide(contact.getFirstName());
        print_ten_wide(contact.getLastName());
        print_ten_wide(contact.getNickName());
		std::cout << std::endl;
}

void	printInfo(Contact contact)
{
	std::cout << "FirstName: " << contact.getFirstName() << std::endl;
	std::cout << "LastName: " << contact.getLastName() << std::endl;
	std::cout << "NickName: " << contact.getNickName() << std::endl;
	std::cout << "DarkestSecret: " << contact.getDarkestSecret() << std::endl;
	std::cout << "PhoneNumber: " << contact.getPhoneNumber() << std::endl;
}

bool	checkNumber(std::string number)
{
	for (size_t i = 0; number[i]; i++)
	{
		if (!isdigit(number[i]))
			return false;
	}
	return true;
}