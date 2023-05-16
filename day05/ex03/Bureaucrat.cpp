/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 17:26:19 by elias             #+#    #+#             */
/*   Updated: 2023/05/16 11:26:14 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
}

Bureaucrat::Bureaucrat(std::string _name, int _grade): name(_name)
{
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
    this->grade = other.grade;
}

Bureaucrat &Bureaucrat::operator = (const Bureaucrat &other)
{
    this->grade = other.grade;
    return *this;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Destructor called for Bureaucrat " << std::endl;
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
	out << bureaucrat.getName() << " bureaucrat grade " << bureaucrat.getGrade() << std::endl;
	return out;
}

void Bureaucrat::signForm(AForm &form)
{
	try
	{
		if (form.getGradeToSign() < this->grade)
			throw Bureaucrat::GradeTooLowException();
		if (form.beSigned(*this))
			std::cout << getName() << " signed " << form.getName() << std::endl;
	}
	catch(std::exception& e)
	{
		std::cout << getName() << " cannot sign " << form.getName() << " because " << e.what() << std::endl;
	}
	
}

void Bureaucrat::executeForm(AForm const & form)
{
	form.checkAndExecute(*this);
}