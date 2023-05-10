/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 06:07:03 by ebelkhei          #+#    #+#             */
/*   Updated: 2023/05/09 12:51:50 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public AAnimal
{
    private:
        Brain *brain;
    
    public:
        Cat(void);
        Cat(const Cat &other);
        Cat& operator=(const Cat &other);
        ~Cat(void);

        void makeSound();
        void setIdeas(std::string idea);
        const Brain &getBrain() const;
};

#endif