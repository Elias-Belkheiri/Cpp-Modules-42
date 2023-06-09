/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 20:54:23 by elias             #+#    #+#             */
/*   Updated: 2023/05/16 17:07:56 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(): is_signed(false), gradeToSign(0), gradeToExecute(0)
{
}

AForm::AForm(const std::string name, int _gradeToSign, int _gradeToExecute): name(name), is_signed(false), gradeToSign(_gradeToSign), gradeToExecute(_gradeToExecute)
{
    if (_gradeToSign > 150 || _gradeToExecute > 150)
        throw AForm::GradeTooLowException();
    if (_gradeToSign < 1 || _gradeToExecute < 1)
        throw AForm::GradeTooHighException();
}

AForm::AForm(const AForm &other): name(other.name), is_signed(other.is_signed), gradeToSign(other.gradeToSign), gradeToExecute(other.gradeToExecute)
{
    setTarget(other.target);
}

AForm& AForm::operator=(const AForm &other)
{
    setTarget(other.target);
    (void)other;
    return (*this);
}

AForm::~AForm()
{
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
    if (burea.getGrade() > getGradeToSign())
        throw AForm::GradeTooLowException();    
    if (isSigned())
    {
        std::cout << "AForm is already signed" << std::endl;
        return false;    
    }
    this->is_signed = true;
    std::cout << burea.getName() << " signed " << getName() << std::endl;
    return true;
}

void AForm::checkAndExecute(Bureaucrat const & executor) const
{
    if (executor.getGrade() > getGradeToExec())
        throw AForm::GradeTooLowException();
    if (!isSigned())
        throw AForm::AFormNotSignedException();
    execute(executor);
    std::cout << executor.getName() << " executed " << this->getName() << std::endl;
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