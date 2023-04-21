/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elias <elias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 17:20:49 by elias             #+#    #+#             */
/*   Updated: 2023/04/16 17:38:48 by elias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>

class Bureaucrat
{
	const std::string name;
	unsigned int      grade;

	public:
		Bureaucrat();
		Bureaucrat(std::string _name, int _grade);
		Bureaucrat(const Bureaucrat &other);
		Bureaucrat &operator=(const Bureaucrat &other);
		~Bureaucrat();
	
		std::string  getName() const;
		unsigned int getGrade() const;
		void		 incrementGrade();
		void		 decrementGrade();
	
		class GradeTooHighException: public std::exception
		{
			public:
				const char* what() const throw();
		};
		
		class GradeTooLowException: public std::exception
		{
			public:
				const char* what() const throw();
		};
};

std::ostream& operator<<(std::ostream& out, Bureaucrat &bureaucrat);

#endif