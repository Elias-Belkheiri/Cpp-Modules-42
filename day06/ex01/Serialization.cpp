/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 20:23:05 by ebelkhei          #+#    #+#             */
/*   Updated: 2023/05/13 14:11:38 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

Serialization::Serialization() {}

Serialization::Serialization(const Serialization &src) { (void)src;}

Serialization &Serialization::operator=(const Serialization &rhs)
{
    (void)rhs;
    return *this;
}

Serialization::~Serialization() {}



uintptr_t	Serialization::serialize(Data* ptr)
{
    return reinterpret_cast<uintptr_t>(ptr); 
}

Data*		Serialization::deserialize(uintptr_t raw)
{
    return reinterpret_cast<Data *>(raw);
}