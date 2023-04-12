/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 06:07:03 by ebelkhei          #+#    #+#             */
/*   Updated: 2023/04/11 06:27:10 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat: public Animal
{
    public:
        Cat(void);
        Cat(const Cat &other);
        Cat& operator=(const Cat &other);
        ~Cat(void);

        void makeSound() const;
};

#endif