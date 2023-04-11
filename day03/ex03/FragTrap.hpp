/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 02:51:26 by ebelkhei          #+#    #+#             */
/*   Updated: 2023/04/10 20:06:17 by ebelkhei         ###   ########.fr       */
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
	    ~FragTrap(void);

		void attack(const std::string& target);
		void highFivesGuys(void);
};

#endif