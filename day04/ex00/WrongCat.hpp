/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 06:36:40 by ebelkhei          #+#    #+#             */
/*   Updated: 2023/04/11 06:37:09 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
    public:
        WrongCat(void);
        WrongCat(const WrongCat &other);
        WrongCat& operator=(const WrongCat &other);
        ~WrongCat(void);

        void makeSound() const;
};

#endif