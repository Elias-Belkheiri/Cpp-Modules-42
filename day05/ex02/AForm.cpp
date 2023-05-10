/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 20:54:23 by elias             #+#    #+#             */
/*   Updated: 2023/05/10 16:14:52 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(): is_signed(false), gradeToSign(0), gradeToExecute(0)
{
    std::cout << "Default constructor called" << std::endl;
}

AForm::AForm(const std::string name, int _gradeToSign, int _gradeToExecute): name(name), is_signed(false), gradeToSign(_gradeToSign), gradeToExecute(_gradeToExecute)
{
    std::cout << "Overload Constructor called" << std::endl;
    try
    {
        if (_gradeToSign > 150 || _gradeToExecute > 150)
            throw AForm::GradeTooLowException();
        if (_gradeToSign < 1 || _gradeToExecute < 1)
            throw AForm::GradeTooHighException();
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

AForm::AForm(const AForm &other): name(other.name), is_signed(other.is_signed), gradeToSign(other.gradeToSign), gradeToExecute(other.gradeToExecute)
{
    std::cout << "Copy Constructor called" << std::endl;
    setTarget(other.target);
}

AForm& AForm::operator=(const AForm &other)
{
    std::cout << "Copy assignment constructor called" << std::endl;
    setTarget(other.target);
    (void)other;
    return (*this);
}

AForm::~AForm()
{
    std::cout << "Destructor called" << std::endl;
}

std::string AForm::getName() const
{
    return (this->name);
}

bool AForm::isSigned() const
{
    return (this->is_signed);
}

unsigned int AForm::getGradeToSign() const
{
    return (this->gradeToSign);
}

unsigned int AForm::getGradeToExec() const
{
    return (this->gradeToExecute);
}

std::ostream& operator<<(std::ostream &out, const AForm &AForm)
{
	out << "Name: " << AForm.getName();
	if (AForm.isSigned())
		out << " is signed";
	else
		out << " is not signed";
	out << " and requires a grade of " << AForm.getGradeToSign() << " to sign and a grade of " << AForm.getGradeToExec() << " to execute" << std::endl;
	return (out);
}

const char *AForm::GradeTooHighException:: what() const throw()
{
	return "Grade is too high";
}

const char *AForm::GradeTooLowException:: what() const throw()
{
	return "Grade is too low";
}

const char *AForm::AFormNotSignedException:: what() const throw()
{
	return "AForm is not signed";
}

bool    AForm::beSigned(const Bureaucrat &burea)
{
    try
    {
        if (burea.getGrade() > getGradeToSign())
            throw AForm::GradeTooLowException();    
        if (isSigned())
        {
            std::cout << "AForm is already signed" << std::endl;
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

void AForm::checkAndExecute(Bureaucrat const & executor) const
{
    try
    {
        if (executor.getGrade() > getGradeToExec())
            throw AForm::GradeTooLowException();
        if (!isSigned())
            throw AForm::AFormNotSignedException();
        execute(executor);
        std::cout << executor.getName() << " executed " << this->getName() << std::endl;
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << '\n';
        std::cout << executor.getName() << " cannot execute " << this->getName() << std::endl;
    }
}

void AForm::signForm()
{
    this->is_signed = true;
}

std::string AForm::getTarget() const
{
    return (this->target);
}

void AForm::setTarget(std::string _target)
{
    this->target = _target;
}