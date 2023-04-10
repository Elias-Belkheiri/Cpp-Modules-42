/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 02:51:26 by ebelkhei          #+#    #+#             */
/*   Updated: 2023/04/09 06:00:18 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class  ScavTrap : public ClapTrap
{
	public:
	    ScavTrap(void);
	    ScavTrap(std::string name);
	    ~ScavTrap(void);

		void attack(const std::string& target);
		void guardGate();
};

#endif