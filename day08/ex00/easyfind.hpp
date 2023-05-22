/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 15:15:41 by ebelkhei          #+#    #+#             */
/*   Updated: 2023/05/21 12:34:12 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

class elementNotFound :  public std::exception
{
    // Check the constructors
    virtual const char *what() const throw()
    {
        return ("Element not found");
    }
};

typedef std::vector<int>::iterator iter;

template<typename T>
iter  easyfind(T cont, int n)
{
    iter it;
    it = std::find(cont.begin(), cont.end(), n);
    
    if (it != cont.end())
        return (std::find(cont.begin(), cont.end(), n));
    throw elementNotFound();
}