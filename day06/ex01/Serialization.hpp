/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 20:20:59 by ebelkhei          #+#    #+#             */
/*   Updated: 2023/05/13 14:16:34 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZATION_HPP
# define SERIALIZATION_HPP

#include <iostream>
#include "Data.hpp"

class Serialization
{
    public:
        Serialization();
        Serialization(const Serialization &src);
        Serialization &operator=(const Serialization &rhs);
        ~Serialization();

        static uintptr_t	serialize(Data* ptr);
        static Data		    *deserialize(uintptr_t raw);
};

#endif