/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elias <elias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 22:23:09 by elias             #+#    #+#             */
/*   Updated: 2023/04/02 01:16:29 by elias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <string>

class Harl
{
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );
	public:
		void complain( std::string level );
};

typedef void (Harl:: *pt_func) (void);

#endif