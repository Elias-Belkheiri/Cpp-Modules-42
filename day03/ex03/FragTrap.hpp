/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 02:51:26 by ebelkhei          #+#    #+#             */
/*   Updated: 2023/04/11 05:54:05 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class  FragTrap : virtual public ClapTrap
{
	public:
	    FragTrap(void);
	    FragTrap(std::string name);
		FragTrap& operator=(FragTrap &other);
		FragTrap(FragTrap &fragtrap);
	    ~FragTrap(void);

		void highFivesGuys(void);
};

#endif