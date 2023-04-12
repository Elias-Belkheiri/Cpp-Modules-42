/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 06:33:27 by ebelkhei          #+#    #+#             */
/*   Updated: 2023/04/11 06:37:13 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

class WrongAnimal
{
    protected:
        std::string type;
    public:
        WrongAnimal(void);
        WrongAnimal(const WrongAnimal &other);
        WrongAnimal& operator=(const WrongAnimal &other);
        ~WrongAnimal(void);

        void makeSound() const;
        std::string getType() const;
};

#endif