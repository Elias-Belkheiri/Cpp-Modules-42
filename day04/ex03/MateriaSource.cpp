/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 21:13:08 by ebelkhei          #+#    #+#             */
/*   Updated: 2023/05/05 15:17:38 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++)
        this->_materias[i] = NULL;
    std::cout << "MateriaSource constructor called" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &other)
{
    std::cout << "MateriaSource copy constructor called" << std::endl;
    *this = other;
}

MateriaSource& MateriaSource::operator=(const MateriaSource &other)
{
    if (this != &other)
    {
        for (int i = 0; i < 4; i++)
        {
            if (this->_materias[i])
                delete this->_materias[i];
            this->_materias[i] = other._materias[i];
        }
    }
    std::cout << "MateriaSource assignment operator called" << std::endl;
    return (*this);
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_materias[i])
            delete this->_materias[i];
    }
    std::cout << "MateriaSource destructor called" << std::endl;
}

void    MateriaSource::learnMateria(AMateria *m)
{
    for (int i = 0; i < 4; i++)
    {
        if (!this->_materias[i])
        {
            this->_materias[i] = m;
            return ;
        }
    }
    std::cout << "MateriaSource is full" << std::endl;
}

AMateria    *MateriaSource::createMateria(std::string const &type)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_materias[i] && this->_materias[i]->getType() == type)
            return (this->_materias[i]->clone());
    }
    return (NULL);
}