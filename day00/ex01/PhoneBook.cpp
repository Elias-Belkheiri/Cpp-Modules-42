/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 19:59:29 by ebelkhei          #+#    #+#             */
/*   Updated: 2023/04/04 23:12:53 by ebelkhei         ###   ########.fr       */
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
		if (tmp[0] != ' ' && tmp[0] != '\t')
			contacts[idx].firstName = tmp;
		else
			tmp = "";
	}
	tmp = "";
	while (!tmp.length())
	{
		std::cout << "Enter lastName: ";
		getline(std::cin, tmp);
		if (tmp[0] != ' ' && tmp[0] != '\t')
			contacts[idx].lastName = tmp;
		else
			tmp = "";
	}
	tmp = "";
	while (!tmp.length())
	{
		std::cout << "Enter nickName: ";
		getline(std::cin, tmp);
		if (tmp[0] != ' ' && tmp[0] != '\t')
			contacts[idx].nickName = tmp;
		else
			tmp = "";
	}
	tmp = "";
	while (!tmp.length())
	{
		std::cout << "Enter darkestSecret: ";
		getline(std::cin, tmp);
		if (tmp[0] != ' ' && tmp[0] != '\t')
			contacts[idx].darkestSecret = tmp;
		else
			tmp = "";
	}
	tmp = "";
	while (!tmp.length())
	{
		std::cout << "Enter phoneNumber: ";
        getline(std::cin, tmp);
		if (checkNumber(tmp) && tmp[0] != ' ' && tmp[0] != '\t')
		{
			contacts[idx].phoneNumber = tmp;
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
			std::cout << contacts[idx - 1].firstName << std::endl;
			std::cout << contacts[idx - 1].lastName << std::endl;
			std::cout << contacts[idx - 1].nickName << std::endl;
			std::cout << contacts[idx - 1].darkestSecret << std::endl;
			std::cout << contacts[idx - 1].phoneNumber << std::endl;
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
	std::cout << "please enter an index" << std::endl;
	std::getline(std::cin, str);
	if (!checkNumber(str) || atoi(str.c_str()) < 0 || atoi(str.c_str()) > size - 1)
		std::cout << "Invalid number" << std::endl;
	else
		printContact(contacts[atoi(str.c_str())], atoi(str.c_str()));
}