/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 21:38:00 by ebelkhei          #+#    #+#             */
/*   Updated: 2023/05/16 11:17:21 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : AForm("ShrubberyCreationForm", 145, 137)
{
    setTarget(target);
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : AForm(other)
{
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
    if (other.isSigned())
        this->signForm();
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "ShrubberyCreationForm Destructor called" << std::endl;
}


void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    (void)executor;
    std::string filename = getTarget() + "_shrubbery";
    std::ofstream file(filename);
    file << "      *" << std::endl;
    file << "     / \\" << std::endl;
    file << "    /   \\" << std::endl;
    file << "   *     *" << std::endl;
    file << "  / \\   / \\" << std::endl;
    file << " *   * *   *" << std::endl;
    
    file << std::endl;
    
    file << "        o\n";
    file << "       / \\\n";
    file << "      o   o\n";
    file << "     / \\\n";
    file << "    o   o\n";
    
    file << std::endl;
    
    file << "          @\n";
    file << "         /|\\\n";
    file << "        @ @ @\n";
    file << "         \\|/\n";
    file << "          @\n";

    file.close();
}