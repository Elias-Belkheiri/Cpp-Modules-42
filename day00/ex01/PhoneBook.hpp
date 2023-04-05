/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 19:55:41 by ebelkhei          #+#    #+#             */
/*   Updated: 2023/04/04 23:13:17 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "Contact.hpp"

class	PhoneBook
{
	Contact	contacts[8];
	int     size;
	int		idx;
	public:
	    		PhoneBook();
	    void	addContact();
		void    print();
		void	search();
};

void	print_ten_wide(std::string str);
void	printContact(Contact contact, int i);
bool	checkNumber(std::string number);

#endif