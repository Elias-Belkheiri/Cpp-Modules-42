/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 19:59:29 by ebelkhei          #+#    #+#             */
/*   Updated: 2023/04/06 17:25:14 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	idx = size = 0;
}

void    PhoneBook::addContact()
{
	std::string tmp;
	if (idx == 8)
		idx = 0;
	while (!tmp.length())
	{
		std::cout << "Enter firstName: ";
        getline(std::cin, tmp);
		if (std::cin.eof())
			exit(1);
		if (tmp[0] != ' ' && tmp[0] != '\t')
			contacts[idx].setInfo(tmp, "firstName");
		else
			tmp = "";
	}
	tmp = "";
	while (!tmp.length())
	{
		std::cout << "Enter lastName: ";
        getline(std::cin, tmp);
		if (std::cin.eof())
			exit(1);
		if (tmp[0] != ' ' && tmp[0] != '\t')
			contacts[idx].setInfo(tmp, "lastName");
		else
			tmp = "";
	}
	tmp = "";
	while (!tmp.length())
	{
		std::cout << "Enter nickName: ";
        getline(std::cin, tmp);
		if (std::cin.eof())
			exit(1);
		if (tmp[0] != ' ' && tmp[0] != '\t')
			contacts[idx].setInfo(tmp, "nickName");
		else
			tmp = "";
	}
	tmp = "";
	while (!tmp.length())
	{
		std::cout << "Enter darkestSecret: ";
        getline(std::cin, tmp);
		if (std::cin.eof())
			exit(1);
		if (tmp[0] != ' ' && tmp[0] != '\t')
			contacts[idx].setInfo(tmp, "darkestSecret");
		else
			tmp = "";
	}
	tmp = "";
	while (!tmp.length())
	{
		std::cout << "Enter phoneNumber: ";
        getline(std::cin, tmp);
		if (std::cin.eof())
			exit(1);
		if (checkNumber(tmp) && tmp[0] != ' ' && tmp[0] != '\t')
		{
			contacts[idx].setInfo(tmp, "phoneNumber");
			break;
		}
		tmp = "";
	}
	if (size < 8)
		size++;
	idx++;
}

void    PhoneBook::print()
{
	std::cout << contacts[idx - 1].getFirstName() << std::endl;
	std::cout << contacts[idx - 1].getLastName() << std::endl;
	std::cout << contacts[idx - 1].getNickName() << std::endl;
	std::cout << contacts[idx - 1].getDarkestSecret() << std::endl;
	std::cout << contacts[idx - 1].getPhoneNumber() << std::endl;
};

void	PhoneBook::search()
{
	std::string	str;

	if (!size)
	{
		std::cout << "The PhoneBook is empty\n";
		return ;
	}
	std::cout << "     Index|";
	std::cout << " firstName|";
	std::cout << "  lastName|";
	std::cout << "  nickName\n";
	for (int i = 0; i < size; i++)
		printContact(contacts[i], i);
	while (1)
	{	
		std::cout << "please enter an index" << std::endl;
		getline(std::cin, str);
		if (std::cin.eof())
			exit (1);
		if (!checkNumber(str) || atoi(str.c_str()) < 0 || atoi(str.c_str()) > size - 1)
		{
			std::cout << "Invalid number" << std::endl;
			str = "";	
		}
		else
		{
			printInfo(contacts[atoi(str.c_str())]);
			break;
		}
	}
}