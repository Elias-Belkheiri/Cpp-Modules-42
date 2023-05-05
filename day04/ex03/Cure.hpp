/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 15:31:49 by ebelkhei          #+#    #+#             */
/*   Updated: 2023/05/04 21:35:05 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"


class Cure: public AMateria
{
	public:
		Cure();
		Cure(const Cure& other);
		Cure& operator=(const Cure& other);
		~Cure();

		AMateria* clone() const;
		void use(ICharacter& target);
};

#endif