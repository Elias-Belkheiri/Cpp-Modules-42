/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 22:31:28 by ebelkhei          #+#    #+#             */
/*   Updated: 2023/04/04 23:03:38 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int main(int argc, char *argv[])
{
	char c;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		for (size_t i = 1; argv[i]; i++)
		{
			for (size_t j = 0; argv[i][j]; j++)
				std::cout << (c = toupper(argv[i][j]));
		}
		
	}
	std::cout << std::endl;
}