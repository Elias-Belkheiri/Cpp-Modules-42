/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 21:38:00 by ebelkhei          #+#    #+#             */
/*   Updated: 2023/05/10 16:51:18 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 72, 45)
{
    std::cout << "RobotomyRequestForm Default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : Form("RobotomyRequestForm", 72, 45)
{
    std::cout << "RobotomyRequestForm Overload constructor called" << std::endl;
    setTarget(target);
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : Form(other)
{
    std::cout << "RobotomyRequestForm Copy constructor called" << std::endl;
    setTarget(other.getTarget());
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
    std::cout << "RobotomyRequestForm Copy assignment constructor called" << std::endl;
    setTarget(other.getTarget());
    if (other.isSigned())
        this->signForm();
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "RobotomyRequestForm Destructor called" << std::endl;
}

void RobotomyRequestForm::checkAndExecute(Bureaucrat const & executor) const
{
    try
    {
        if (executor.getGrade() > getGradeToExec())
            throw Form::GradeTooLowException();
        if (!isSigned())
            throw Form::FormNotSignedException();
        execute(executor);
    }
    catch(std::exception& e)
    {
        std::cerr << "The robotomy failed" << std::endl;
    }
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    (void)executor;
    std::cout << "zzzzzzzzzzzzzzzzzz 🛠️" << std::endl;
    std::cout << getTarget() << " has been robotomized successfully 50% of the time" << std::endl;
}