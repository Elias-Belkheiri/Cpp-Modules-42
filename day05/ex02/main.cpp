/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 17:07:44 by elias             #+#    #+#             */
/*   Updated: 2023/05/16 11:39:58 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

// Check the name problem

int main()
{
    // Bureaucrat b("A", 14);
    // ShrubberyCreationForm a("Shobee");
    // a.beSigned(b);
    // a.checkAndExecute(b);

    // Bureaucrat b("A", 10);
    // RobotomyRequestForm a("Shobee");
    // a.beSigned(b);
    // a.checkAndExecute(b);

    Bureaucrat b("A", 2);
    PresidentialPardonForm a("Shobee");
    a.beSigned(b);
    a.checkAndExecute(b);

    // PresidentialPardonForm a("Shobee");
    // Bureaucrat b("A", 20);
    // b.beSigned(b);
    // b.executeForm(a);
}