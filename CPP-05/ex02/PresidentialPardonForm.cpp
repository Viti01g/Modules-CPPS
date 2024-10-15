/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: VR <VR@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 16:40:51 by VR                #+#    #+#             */
/*   Updated: 2024/10/15 17:06:44 by VR               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : AForm("PresidentialPardonForm", "none", 25, 5)
{
	if (INFO == 1)
		std::cout << "PresidentialPardonForm default constructor" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string target) : AForm("PresidentialPardonForm", target, 25, 5)
{
	if (INFO == 1)
		std::cout << "PresidentialPardonForm default constructor with info" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other) : AForm(other)
{
	if (INFO == 1)
		std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	if (INFO == 1)
		std::cout << "PresidentialPardonForm destructor called" << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other)
{
	if (INFO == 1)
		std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
	if (this != &other)
		*this = other;
	return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	try
	{
		if (!this->getSigned())
			throw AForm::NotSignedException();
		if (executor.getGrade() > this->getGrExec())
			throw AForm::GradeTooLowException();
		std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
}
