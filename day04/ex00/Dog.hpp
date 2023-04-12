/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 06:11:21 by ebelkhei          #+#    #+#             */
/*   Updated: 2023/04/11 06:24:05 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog: public Animal
{
    public:
        Dog(void);
        Dog(const Dog &other);
        Dog& operator=(const Dog &other);
        ~Dog(void);

        void makeSound() const;
        std::string getType() const;

};

#endif