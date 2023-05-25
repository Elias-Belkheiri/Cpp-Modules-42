/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 15:15:41 by ebelkhei          #+#    #+#             */
/*   Updated: 2023/05/25 15:58:08 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

class ElementNotFound :  public std::exception
{
    // Check the constructors
    public:
        virtual const char *what() const throw()
        {
            return ("Element not found");
        }
};

template<typename T>
int  easyfind(T cont, int n)
{
    if (std::find(cont.begin(), cont.end(), n) != cont.end())
        return (n);
    throw ElementNotFound();
}