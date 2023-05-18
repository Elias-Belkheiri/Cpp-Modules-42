/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 11:22:08 by ebelkhei          #+#    #+#             */
/*   Updated: 2023/05/18 11:43:26 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>
#include <string>

template <typename T>
void iter(T *arr, unsigned int len, void (*f)(T))
{
    if (!arr || !f)
        return ;

    for (unsigned int i = 0; i < len; i++)
        f(arr[i]);
}

#endif