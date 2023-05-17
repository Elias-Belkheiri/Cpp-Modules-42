/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 17:07:44 by elias             #+#    #+#             */
/*   Updated: 2023/05/17 11:04:42 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

void test(std::string name, int grade)
{
	try
	{
		Bureaucrat a(name, grade);
		// a.incrementGrade();
		// a.decrementGrade();
		std::cout << a << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}


int main()
{
	test("Hmeda", 1);
	std::cout << std::endl;
	test("Hmeda", 0);
	std::cout << std::endl;
	test("Hmeda", 150);
	std::cout << std::endl;
}