/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 22:31:28 by ebelkhei          #+#    #+#             */
/*   Updated: 2023/04/06 17:07:00 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cctype>

int main(int argc, char *argv[])
{
	std::string arg;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		for (size_t i = 1; argv[i]; i++)
		{
			arg = argv[i];
			for (size_t j = 0; j < arg.length(); j++)
				arg[j] = toupper(arg[j]);
			std::cout << arg;
		}
		
	}
	std::cout << std::endl;
}