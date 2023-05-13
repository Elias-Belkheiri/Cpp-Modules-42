/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Tools.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 14:43:36 by ebelkhei          #+#    #+#             */
/*   Updated: 2023/05/13 14:58:58 by ebelkhei         ###   ########.fr       */
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