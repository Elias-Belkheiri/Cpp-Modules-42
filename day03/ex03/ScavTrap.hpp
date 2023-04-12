/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 02:51:26 by ebelkhei          #+#    #+#             */
/*   Updated: 2023/04/11 05:34:12 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class  ScavTrap : virtual public ClapTrap
{
	public:
	    ScavTrap(void);
	    ScavTrap(std::string name);
		ScavTrap(ScavTrap &_scavtrap);
		ScavTrap &operator=(ScavTrap const &scavtrap);
	    ~ScavTrap(void);

		void attack(const std::string& target);
		void guardGate();
};

#endif