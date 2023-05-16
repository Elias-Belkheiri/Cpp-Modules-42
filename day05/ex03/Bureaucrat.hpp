/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 17:20:49 by elias             #+#    #+#             */
/*   Updated: 2023/05/10 16:10:29 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include "AForm.hpp"

class AForm;

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
		void		 signForm(AForm &form);
		void 		 executeForm(AForm const & form);
	
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