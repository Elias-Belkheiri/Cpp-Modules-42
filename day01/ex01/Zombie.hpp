/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 17:54:11 by elias             #+#    #+#             */
/*   Updated: 2023/04/05 00:16:57 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class	Zombie
{
	private:
	std::string name;
	public:
		Zombie();
		Zombie(std::string _name);
		~Zombie();
		void setName(std::string _name);
		void announce(void);
};

Zombie* zombieHorde( int N, std::string name );