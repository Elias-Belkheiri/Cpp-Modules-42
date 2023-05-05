/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 06:02:57 by ebelkhei          #+#    #+#             */
/*   Updated: 2023/05/05 16:11:33 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{
    protected:
        std::string type;
    public:
        Animal(void);
        Animal(const Animal &other);
        Animal& operator=(const Animal &other);
        virtual ~Animal(void);

        virtual void makeSound() const;
        std::string getType() const;
};

#endif