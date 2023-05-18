/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 13:35:18 by ebelkhei          #+#    #+#             */
/*   Updated: 2023/05/17 16:04:14 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

int main()
{
    Data data;
    data.n = 42;

    uintptr_t raw = Serialization::serialize(&data);
    Data *ptr = Serialization::deserialize(raw);

    std::cout << "Original data: " << &data << std::endl;
    std::cout << "Serialized data: " << ptr << std::endl;

    // Data data;
    // data.n = 42;
    // uintptr_t raw = Serialization::serialize(&data);
    // Data *ptr = Serialization::deserialize(raw);
    // ptr->n = 13;
    // std::cout << "Original data: " << data.n << std::endl;
    // std::cout << "Serialized data: " << ptr->n << std::endl;
}
