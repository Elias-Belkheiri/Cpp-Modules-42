/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 15:15:41 by ebelkhei          #+#    #+#             */
/*   Updated: 2023/05/28 12:14:04 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <exception>

template<typename T>
int  easyfind(T cont, int n)
{
    if (std::find(cont.begin(), cont.end(), n) != cont.end())
        return (n);
    throw std::out_of_range("Element not found.");
}