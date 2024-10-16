/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vruiz-go <vruiz-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 16:41:59 by VR                #+#    #+#             */
/*   Updated: 2024/10/16 12:39:42 by vruiz-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

const char* ShrubberyCreationForm::CannotOpenFileException::what(void) const throw()
{
	return "The file cannot be oppened";
}

static void fillWithTrees(std::ofstream& output)
{
	output << "               ,@@@@@@@," << std::endl;
	output << "       ,,,.   ,@@@@@@/@@,  .oo8888o." << std::endl;
	output << "    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o" << std::endl;
	output << "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'" << std::endl;
	output << "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'" << std::endl;
	output << "   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'" << std::endl;
	output << "   `&%\\ ` /%&'    |.|        \\ '|8'" << std::endl;
	output << "       |o|        | |         | |" << std::endl;
	output << "       |.|        | |         | |" << std::endl;
	output << "    \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm("ShrubberyCreationForm", "none", 145, 137)
{
	if (INFO == 1)
		std::cout << "ShrubberyCreationForm default constructor" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : AForm("ShrubberyCreationForm", target, 145, 137)
{
	if (INFO == 1)
		std::cout << "ShrubberyCreationForm default constructor with info" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) : AForm(other)
{
	if (INFO == 1)
		std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	if (INFO == 1)
		std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
	if (INFO == 1)
		std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
	if (this != &other)
		*this = other;
	return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	std::ofstream output;
	
	try
	{
		if (!this->getSigned())
			throw AForm::NotSignedException();
		if (executor.getGrade() > this->getGrExec())
			throw AForm::GradeTooLowException();
		output.open((this->getTarget() + "_shrubbery").c_str(), std::ios::out);
		if (!output.is_open())
			throw ShrubberyCreationForm::CannotOpenFileException();
		else
		{
			fillWithTrees(output);
			output.close();
		}
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
}
