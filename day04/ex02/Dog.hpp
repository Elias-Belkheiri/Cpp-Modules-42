/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 06:11:21 by ebelkhei          #+#    #+#             */
/*   Updated: 2023/05/09 12:51:53 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public AAnimal
{
    private:
        Brain *brain;
    
    public:
        Dog(void);
        Dog(const Dog &other);
        Dog& operator=(const Dog &other);
        ~Dog(void);

        void makeSound();
        void setIdeas(std::string idea);
        const Brain &getBrain() const;
};

#endif