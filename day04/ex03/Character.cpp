/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 16:23:08 by ebelkhei          #+#    #+#             */
/*   Updated: 2023/05/09 13:07:57 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
    std::cout << "Character Default constructor called" << std::endl;
    for (int i = 0; i < 4; i++)
        this->inventory[i] = NULL;
}

Character::Character(std::string name)
{
    std::cout << "Character overloaded constructor called" << std::endl;
    this->name = name;
    for (int i = 0; i < 4; i++)
        this->inventory[i] = NULL;
}

Character::Character(const Character& other)
{
    std::cout << "Character Copy constructor called" << std::endl;
    *this = other;
}

Character& Character::operator=(const Character& other)
{
    if (this == &other)
        return (*this);
    std::cout << "Character Assignment constructor called" << std::endl;
    this->name = other.name;
    for (int i = 0; i < 4; i++)
    {
        if (this->inventory[i])
        {
            delete this->inventory[i];
            this->inventory[i] = NULL;
        }
        if (other.inventory[i])
            this->inventory[i] = other.inventory[i]->clone();
    }
    return (*this);
}

Character::~Character()
{
    std::cout << "Character Destructor called" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        if (this->inventory[i])
            delete this->inventory[i];
    }
}

std::string const & Character::getName() const
{
    return (this->name);
}

void Character::equip(AMateria* m)
{
    for (int i = 0; i < 4; i++)
    {
        if (!this->inventory[i])
        {
            this->inventory[i] = m;
            return ;
        }
    }
    std::cout << "NO place to add another materia" << std::endl;
}

void Character::unequip(int idx)
{
    if (idx < 0 || idx > 3 || !this->inventory[idx])
    {
        std::cout << "No materia in this idx" << std::endl;   
        return ;
    }
    this->inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
    if (idx < 0 || idx > 3 || !this->inventory[idx])
    {
        std::cout << "No materia in this idx" << std::endl;   
        return ;
    }
    this->inventory[idx]->use(target);
}

AMateria* Character::getMateria(int idx)
{
    if (idx < 0 || idx > 3)
        return (NULL);
    return (this->inventory[idx]);
}