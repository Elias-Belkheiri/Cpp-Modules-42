/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 20:54:23 by elias             #+#    #+#             */
/*   Updated: 2023/05/10 16:14:52 by ebelkhei         ###   ########.fr       */
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
    try
    {
        if (_gradeToSign > 150 || _gradeToExecute > 150)
            throw Form::GradeTooLowException();
        if (_gradeToSign < 1 || _gradeToExecute < 1)
            throw Form::GradeTooHighException();
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

Form::Form(const Form &other): name(other.name), is_signed(other.is_signed), gradeToSign(other.gradeToSign), gradeToExecute(other.gradeToExecute)
{
    std::cout << "Copy Constructor called" << std::endl;
    setTarget(other.target);
}

Form& Form::operator=(const Form &other)
{
    std::cout << "Copy assignment constructor called" << std::endl;
    setTarget(other.target);
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

std::ostream& operator<<(std::ostream &out, const Form &Form)
{
	out << "Name: " << Form.getName();
	if (Form.isSigned())
		out << " is signed";
	else
		out << " is not signed";
	out << " and requires a grade of " << Form.getGradeToSign() << " to sign and a grade of " << Form.getGradeToExec() << " to execute" << std::endl;
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

const char *Form::FormNotSignedException:: what() const throw()
{
	return "Form is not signed";
}

bool    Form::beSigned(const Bureaucrat &burea)
{
    try
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
    catch(std::exception& e)
    {
        std::cerr << e.what() << '\n';
        return false;
    }
}

void Form::checkAndExecute(Bureaucrat const & executor) const
{
    try
    {
        if (executor.getGrade() > getGradeToExec())
            throw Form::GradeTooLowException();
        if (!isSigned())
            throw Form::FormNotSignedException();
        execute(executor);
        std::cout << executor.getName() << " executed " << this->getName() << std::endl;
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << '\n';
        std::cout << executor.getName() << " cannot execute " << this->getName() << std::endl;
    }
}

void Form::signForm()
{
    this->is_signed = true;
}

std::string Form::getTarget() const
{
    return (this->target);
}

void Form::setTarget(std::string _target)
{
    this->target = _target;
}