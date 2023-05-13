/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Tools.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 14:43:36 by ebelkhei          #+#    #+#             */
/*   Updated: 2023/05/13 15:16:00 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Tools.hpp"

Base *generate(void)
{
    int i = rand() % 3;

    if (i == 0)
        return (new A());
    else if (i == 1)
        return (new B());
    else
        return (new C());
}

void identify(Base* p)
{
    if (dynamic_cast<A *>(p))
        std::cout << "A Object" << std::endl;
    else if (dynamic_cast<B *>(p))
        std::cout << "B Object" << std::endl;
    else if (dynamic_cast<C *>(p))
        std::cout << "C Object" << std::endl;
    else
        std::cout << "Unknown Object" << std::endl;
}

void identify(Base& p)
{
    Base a;
    try
    {
        a = dynamic_cast<A &>(p);
        std::cout << "A Object" << std::endl;
    }
    catch (std::bad_cast &e)
    {
        try
        {
            a = dynamic_cast<B &>(p);
            std::cout << "B Object" << std::endl;
        }
        catch (std::bad_cast &e)
        {
            try
            {
                a = dynamic_cast<C &>(p);
                std::cout << "C Object" << std::endl;
            }
            catch (std::bad_cast &e)
            {
                std::cout << "Unknown Object" << std::endl;
            }
        }
    }
}