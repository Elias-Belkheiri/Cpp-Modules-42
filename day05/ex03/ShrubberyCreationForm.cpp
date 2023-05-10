/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 21:38:00 by ebelkhei          #+#    #+#             */
/*   Updated: 2023/05/10 16:51:23 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", 145, 137)
{
    std::cout << "ShrubberyCreationForm Default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : Form("ShrubberyCreationForm", 145, 137)
{
    std::cout << "ShrubberyCreationForm Overload constructor called" << std::endl;
    setTarget(target);
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : Form(other)
{
    std::cout << "ShrubberyCreationForm Copy constructor called" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
    std::cout << "ShrubberyCreationForm Copy assignment constructor called" << std::endl;
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