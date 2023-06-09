/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 21:38:00 by ebelkhei          #+#    #+#             */
/*   Updated: 2023/05/16 17:50:20 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45)
{
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : AForm("RobotomyRequestForm", 72, 45)
{
    setTarget(target);
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : AForm(other)
{
    setTarget(other.getTarget());
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
    setTarget(other.getTarget());
    if (other.isSigned())
        this->signForm();
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

void RobotomyRequestForm::checkAndExecute(Bureaucrat const & executor) const
{
    if (executor.getGrade() > getGradeToExec())
        throw AForm::GradeTooLowException();
    if (!isSigned())
        throw AForm::AFormNotSignedException();
    execute(executor);
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    (void)executor;
    std::cout << "zzzzzzzzzzzzzzzzzz 🛠️" << std::endl;
    std::cout << getTarget() << " has been robotomized successfully 50% of the time" << std::endl;
}