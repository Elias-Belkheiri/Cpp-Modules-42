/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 20:45:50 by elias             #+#    #+#             */
/*   Updated: 2023/05/07 19:33:30 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    const std::string	name;
    bool				is_signed;
	const int			gradeToSign;
	const int			gradeToExecute;

	public:
		Form();
		Form(const std::string name, int _gradeToSign, int _gradeToExecute);
		Form(const Form &other);
		Form &operator=(const Form &other);
		~Form();
		
		std::string 		getName() const;
		bool				isSigned() const;
		unsigned int 		getGradeToSign() const;
		unsigned int 		getGradeToExec() const;
		bool 				beSigned(const Bureaucrat &burea);

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

std::ostream &operator<<(std::ostream &out, const Form &form);

#endif