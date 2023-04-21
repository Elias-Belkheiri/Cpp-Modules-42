/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elias <elias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 20:54:23 by elias             #+#    #+#             */
/*   Updated: 2023/04/20 15:12:39 by elias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(): is_signed(false), gradeToSign(0), gradeToExecute(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Form::Form(const std::string name, int _gradeToSign, int _gradeToExecute): name(name), is_signed(false), gradeToSign(_gradeToSign), gradeToExecute(_gradeToExecute)
{
    std::cout << "Overload Constructor called" << std::endl;
    if (_gradeToSign > 150 || _gradeToExecute > 150)
        throw Form::GradeTooLowException();
    if (_gradeToSign < 1 || _gradeToExecute < 1)
        throw Form::GradeTooHighException();    
}

Form::Form(const Form &other): name(other.name), is_signed(other.is_signed), gradeToSign(other.gradeToSign), gradeToExecute(other.gradeToExecute)
{
    std::cout << "Copy Constructor called" << std::endl;
}

Form& Form::operator=(const Form &other)
{
    std::cout << "Copy assignment constructor called" << std::endl;
    (void)other;
    return (*this);
}

Form::~Form()
{
    std::cout << "Destructor called" << std::endl;
}

std::string Form::getName() const
{
    return (this->name);
}

bool Form::isSigned() const
{
    return (this->is_signed);
}

unsigned int Form::getGradeToSign() const
{
    return (this->gradeToSign);
}

unsigned int Form::getGradeToExec() const
{
    return (this->gradeToExecute);
}

std::ostream& operator<<(std::ostream &out, const Form &form)
{
	out << "Name: " << form.getName();
	if (form.isSigned())
		out << " is signed";
	else
		out << " is not signed";
	out << " and requires a grade of " << form.getGradeToSign() << " to sign and a grade of " << form.getGradeToExec() << " to execute" << std::endl;
	return (out);
}

const char *Form::GradeTooHighException:: what() const throw()
{
	return "Grade is too high";
}

const char *Form::GradeTooLowException:: what() const throw()
{
	return "Grade is too low";
}

bool    Form::beSigned(const Bureaucrat &burea)
{
    if (burea.getGrade() > getGradeToSign())
        throw Form::GradeTooLowException();
    if (isSigned())
    {
        std::cout << "Form is already signed" << std::endl;
        return false;    
    }
    this->is_signed = true;
    return true;
}