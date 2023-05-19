/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 11:22:08 by ebelkhei          #+#    #+#             */
/*   Updated: 2023/05/19 15:00:28 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

template <typename T>
void iter(T *arr, size_t len, void (*f)(const T&))
{
    if (!arr || !f)
        return ;

    for (size_t i = 0; i < len; i++)
        f(arr[i]);
}