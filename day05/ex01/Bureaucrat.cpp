/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elias <elias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 17:26:19 by elias             #+#    #+#             */
/*   Updated: 2023/04/20 15:13:24 by elias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat()
{
    std::cout << "Default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string _name, int _grade): name(_name)
{
    std::cout << "Overload constructor called" << std::endl;
	try
	{
		if (_grade < 1)
			throw Bureaucrat::GradeTooHighException();
		else if (_grade > 150)
			throw Bureaucrat::GradeTooLowException();
		else
			grade = _grade;
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
};

Bureaucrat::Bureaucrat(const Bureaucrat &other)
{
    std::cout << "Copy constructor called" << std::endl;
    this->grade = other.grade;
}

Bureaucrat &Bureaucrat::operator = (const Bureaucrat &other)
{
    std::cout << "Copy assignment constructor called" << std::endl;
    this->grade = other.grade;
    return *this;
}

std::string Bureaucrat::getName() const
{
    return this->name;
}

unsigned int Bureaucrat::getGrade() const
{

	return this->grade;
}

void Bureaucrat::incrementGrade()
{
	try
	{
		if (this->grade - 1 < 1)
			throw Bureaucrat::GradeTooHighException();
		this->grade--;
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}

void Bureaucrat::decrementGrade()
{
	try
	{
		if (this->grade + 1 > 150)
			throw Bureaucrat::GradeTooLowException();
		this->grade++;
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}

const char *Bureaucrat::GradeTooHighException:: what() const throw()
{
	return "Grade is too high";
}

const char *Bureaucrat::GradeTooLowException:: what() const throw()
{
	return "Grade is too low";
}

std::ostream& operator<<(std::ostream& out, Bureaucrat &bureaucrat)
{
	out << bureaucrat.getName() << " bureaucrat grade " << bureaucrat.getGrade() << std::ends;
	return out;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Destructor called for Bureaucrat " << std::endl;
}

void Bureaucrat::signForm(Form &form)
{
	try
	{
		if (form.getGradeToSign() < this->grade)
			throw Bureaucrat::GradeTooLowException();
		if (form.beSigned(*this))
			std::cout << getName() << " signed" << form.getName() << std::endl;
	}
	catch(std::exception& e)
	{
		std::cout << getName() << " cannot sign " << form.getName() << " because " << e.what() << std::endl;
	}
	
}