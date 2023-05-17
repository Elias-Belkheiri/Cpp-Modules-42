/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 17:07:44 by elias             #+#    #+#             */
/*   Updated: 2023/05/17 11:07:12 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

void test()
{
	try
	{
		Bureaucrat a("Hmeda", 10);
		Form form("Form", 15, 10);
		std::cout << a;
		std::cout << form;
		form.beSigned(a);
		std::cout << form;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void test1()
{
	try
	{
		Bureaucrat a("Hmeda", 5);
		Form form("Form", 1, 10);
		std::cout << a;
		std::cout << form;
		form.beSigned(a);
		std::cout << form;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void test2()
{
	try
	{
		Bureaucrat a("Hmeda", 5);
		Form form("Form", 10, 10);
		std::cout << a;
		std::cout << form;
		a.signForm(form);
		std::cout << form;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

int main()
{
	test();
	std::cout << "---------------------" << std::endl;
	test1();
	std::cout << "---------------------" << std::endl;
	test2();
}