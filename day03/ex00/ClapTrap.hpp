/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 02:00:07 by ebelkhei          #+#    #+#             */
/*   Updated: 2023/04/09 02:09:08 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class	ClapTrap
{
	private:
	    std::string	name;
		int			hitPoints;
		int			energyPoints;
		int			attackDamage;
	public:
	    ClapTrap();
	    ClapTrap(std::string _name);
	    ClapTrap(ClapTrap& other);
		ClapTrap& operator=(ClapTrap& other);
		~ClapTrap();
		
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		int	 getAttackDamage();

};

#endif