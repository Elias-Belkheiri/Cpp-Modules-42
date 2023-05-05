/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 20:22:26 by ebelkhei          #+#    #+#             */
/*   Updated: 2023/05/04 21:53:54 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
    private:
        AMateria    *_materias[4];
        
    public:
        MateriaSource();
        MateriaSource(const MateriaSource &other);
        MateriaSource&operator=(const MateriaSource &other);
        ~MateriaSource();

        void            learnMateria(AMateria *m);
        AMateria        *createMateria(std::string const &type);
};

#endif