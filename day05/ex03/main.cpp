/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 17:07:44 by elias             #+#    #+#             */
/*   Updated: 2023/05/16 11:58:36 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int main()
{
    Intern someRandomIntern;
    AForm* a;
    a = someRandomIntern.makeForm("robotomy request", "Bender");
    
    std::cout << std::endl;

    Intern someRandomIntern2;
    AForm* b;
    b = someRandomIntern2.makeForm("est", "Bender");
}