/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vruiz-go <vruiz-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 12:44:01 by vruiz-go          #+#    #+#             */
/*   Updated: 2024/10/16 13:59:40 by vruiz-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Intern default constructor called." << std::endl;
	return ;
}

Intern::Intern(const Intern &copy)
{
	std::cout << "Intern copy constructor called." << std::endl;
	(void)copy;
	return ;
}

Intern &Intern::operator=(const Intern &assign)
{
	std::cout << "Intern assigment constructor called." << std::endl;
	(void)assign;
	return (*this);
}

Intern::~Intern()
{
	std::cout << "Intern destructor called." << std::endl;
	return ;
}

AForm *Intern::newPresidentialPardonForm(std::string &target)
{
	return new PresidentialPardonForm(target);
}

AForm *Intern::newRobotomyRequestForm(std::string &target)
{
	return new RobotomyRequestForm(target);
}

AForm *Intern::newShrubberyCreationForm(std::string &target)
{
	return new ShrubberyCreationForm(target);
}

AForm *Intern::makeForm(std::string  name, std::string target)
{
	if (target.empty()){
		throw Intern::NoTargetSpecifiedExcepcion();
	}
	AForm* (Intern::*function[3])( std::string& target ) = { &Intern::newShrubberyCreationForm, &Intern::newRobotomyRequestForm, &Intern::newPresidentialPardonForm };
	std::string stringArr[3] = { "shrubbery creation", "robotomy request", "presidential pardon" };

	int i = 0;
	while (name[i]) {
		name[i] = std::tolower(name[i]);
		i++;
	}

	for (int j = 0; j < 3; j++) {
		if (name.compare( stringArr[j] ) == 0) {
			std::cout << "Inter creates " << stringArr[j] << " form.\n";
	std::cout << "----------------------Aqui en Makeform--------------------------" << std::endl;
			return (this->*function[j])( target );		
		}
	}

	throw Intern::FormNotFoundExcepcion();
}

const char* Intern::NoTargetSpecifiedExcepcion::what() const throw()
{
	return "Target of the form is empty";
}

const char* Intern::FormNotFoundExcepcion::what() const throw()
{
	return "Intern cannot find the proper form";
}
