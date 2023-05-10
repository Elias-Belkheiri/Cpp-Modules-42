/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 20:45:50 by elias             #+#    #+#             */
/*   Updated: 2023/05/10 14:48:51 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AForm_HPP
#define AForm_HPP

#include "Bureaucrat.hpp"
#include <iostream>
#include <fstream>

class Bureaucrat;

class AForm
{
	private:
		const std::string	name;
        std::string 		target;
		bool				is_signed;
		const int			gradeToSign;
		const int			gradeToExecute;

	public:
		AForm();
		AForm(const std::string name, int _gradeToSign, int _gradeToExecute);
		AForm(const AForm &other);
		AForm &operator=(const AForm &other);
		~AForm();
		
		std::string 		getName() const;
		bool				isSigned() const;
		unsigned int 		getGradeToSign() const;
		unsigned int 		getGradeToExec() const;
		bool 				beSigned(const Bureaucrat &burea);
		virtual void		execute(Bureaucrat const & executor) const = 0;
		void				checkAndExecute(Bureaucrat const & executor) const;
		void				signForm();
		void				setTarget(std::string _target);
		std::string			getTarget() const;

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
		class AFormNotSignedException: public std::exception
		{
			public:
				const char* what() const throw();
		};
};

std::ostream &operator<<(std::ostream &out, const AForm &AForm);

#endif