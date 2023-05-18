/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 11:25:14 by ebelkhei          #+#    #+#             */
/*   Updated: 2023/05/18 11:34:14 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void iter(T *arr, unsigned int len, void (*f)(T))
{
    if (!arr || !f)
        return ();

    for (unsigned int i = 0; i < len; i++)
        f(arr[i]);
}