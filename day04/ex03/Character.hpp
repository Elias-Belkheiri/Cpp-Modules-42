/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 16:20:41 by ebelkhei          #+#    #+#             */
/*   Updated: 2023/05/04 22:44:35 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character: public ICharacter
{
    private:
        std::string name;
        AMateria*   inventory[4];
    public:
        Character();
        Character(std::string name);
        Character(const Character& other);
        Character& operator=(const Character& other);
        ~Character();

        std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        AMateria* getMateria(int idx);
        void use(int idx, ICharacter& target);
};

#endif