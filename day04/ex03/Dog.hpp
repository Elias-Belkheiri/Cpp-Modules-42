/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 06:11:21 by ebelkhei          #+#    #+#             */
/*   Updated: 2023/04/11 21:58:11 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
    Brain *brain;
    public:
        Dog(void);
        Dog(const Dog &other);
        Dog& operator=(const Dog &other);
        virtual ~Dog(void);

        void makeSound();
        std::string getType() const;

};

#endif