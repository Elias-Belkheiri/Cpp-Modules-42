/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 18:44:14 by ebelkhei          #+#    #+#             */
/*   Updated: 2023/05/10 16:55:37 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
}

Intern::Intern(const Intern &other)
{
    *this = other;
}

Intern &Intern::operator=(const Intern &other)
{
    (void)other;
    return (*this);
}

Intern::~Intern()
{
    std::cout << "Intern destructor" << std::endl;
}

Form *Intern::makeForm(const std::string &name, const std::string &target)
{
    Form *form = NULL;
    int i = 0;
    std::string forms[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};
    
    while (i < 3 && name != forms[i])
        i++;
    if (name != forms[i])
    {
        std::cout << "Intern can't create " << name << " form" << std::endl;
        return (form);
    }
    
    switch (i)
    {
        case 0:
            form = new PresidentialPardonForm(target);
            break;
        case 1:
            form = new RobotomyRequestForm(target);
            break;
        case 2:
            form = new ShrubberyCreationForm(target);
            break;
    }
    
    std::cout << "Intern creates " << name << std::endl;
    return (form);
}