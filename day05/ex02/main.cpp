/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 17:07:44 by elias             #+#    #+#             */
/*   Updated: 2023/05/16 17:46:13 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

void test()
{
    try
    {
        Bureaucrat b("A", 14);
        std::cout << b << std::endl;
        ShrubberyCreationForm a("Shobee");
        std::cout << a << std::endl;
        a.beSigned(b);
        a.checkAndExecute(b);
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
        Bureaucrat b("A", 10);
        std::cout << b << std::endl;
        RobotomyRequestForm a("Shobee");
        std::cout << a << std::endl;
        a.beSigned(b);
        a.checkAndExecute(b);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}

void test3()
{
    try
    {
        Bureaucrat b("A", 2);
        std::cout << b << std::endl;
        PresidentialPardonForm a("Shobee");
        std::cout << a << std::endl;
        a.beSigned(b);
        a.checkAndExecute(b);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}

void test4()
{
    try
    {
        Bureaucrat b("A", 33);
        std::cout << b << std::endl;
        PresidentialPardonForm a("Shobee");
        std::cout << a << std::endl;
        a.beSigned(b);
        a.checkAndExecute(b);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}

int main()
{
    test();
    std::cout << "---------------------------------------------" << std::endl;
    test2();
    std::cout << "---------------------------------------------" << std::endl;
    test3();
    std::cout << "---------------------------------------------" << std::endl;
    test4();
}