/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elias <elias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 02:12:49 by elias             #+#    #+#             */
/*   Updated: 2023/03/29 15:59:17 by elias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <cstdlib>
#include <iostream>

class	Contact
{
public:
    std::string firstName;
    std::string lastName;
    std::string nickName;
    std::string darkestSecret;
    std::string phoneNumber;
};

class	PhoneBook
{
	Contact	contacts[8];
	int     size;
	int		idx;
	public:
	    PhoneBook() {idx = size = 0;};
	    void	addContact();
		void    print();
		void	search();
};

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
		print_ten_wide(contact.firstName);
        print_ten_wide(contact.lastName);
        print_ten_wide(contact.nickName);
		std::cout << std::endl;
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

void    PhoneBook::addContact()
{
	std::string tmp;
	if (idx == 8)
		idx = 0;
	while (!tmp.length())
	{
		std::cout << "Enter firstName: ";
		getline(std::cin, tmp);
		contacts[idx].firstName = tmp;
	}
	tmp = "";
	while (!tmp.length())
	{
		std::cout << "Enter lastName: ";
		getline(std::cin, tmp);
		contacts[idx].lastName = tmp;
	}
	tmp = "";
	while (!tmp.length())
	{
		std::cout << "Enter nickName: ";
		getline(std::cin, tmp);
		contacts[idx].nickName = tmp;
	}
	tmp = "";
	while (!tmp.length())
	{
		std::cout << "Enter darkestSecret: ";
		getline(std::cin, tmp);
		contacts[idx].darkestSecret = tmp;
	}
	tmp = "";
	while (!tmp.length())
	{
		std::cout << "Enter phoneNumber: ";
        getline(std::cin, tmp);
		contacts[idx].phoneNumber = tmp;
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