/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: VR <VR@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 16:34:20 by vruiz-go          #+#    #+#             */
/*   Updated: 2024/10/14 16:32:53 by VR               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "AForm.hpp"

AForm::AForm() : _name("Anonimo"), iSigned(false), gr_sign(1), gr_exec(1)
{
	std::cout << "Default AForm constructor called." << std::endl;
	return ;
}

AForm::AForm(const std::string name, unsigned int _gr_sign, unsigned int _gr_exec) : _name(name), gr_sign(_gr_sign), gr_exec(_gr_exec)
{
    std::cout << "AForm constructor called" << std::endl;
    if (gr_sign < 1)
        throw AForm::GradeTooHighException();
    else if (gr_sign > 150)
        throw AForm::GradeTooLowException();
    if (gr_exec < 1)
        throw AForm::GradeTooHighException();
    else if (gr_exec > 150)
        throw AForm::GradeTooLowException();
}

AForm::~AForm()
{
	std::cout << "AForm Destructor called." << std::endl;
	return ;
}

AForm::AForm(const AForm &copy) : _name(copy._name), gr_sign(copy.gr_sign), gr_exec(copy.gr_exec)
{
	if (this != &copy)
		this->iSigned = copy.iSigned;
	std::cout << "AForm copy constructor called." << std::endl;
	return ;
}

AForm &AForm::operator=(const AForm &assign)
{
	if (this != &assign)
		this->iSigned = assign.iSigned;
	std::cout << "AForm assign constructor called." << std::endl;
	return *this;
}

std::string AForm::getName() const
{
	return (this->_name);
}

bool AForm::getSigned() const
{
	return (this->iSigned);
}

unsigned int AForm::getGrSign() const
{
	return (this->gr_sign);
}

unsigned int AForm::getGrExec() const
{
	return (this->gr_exec);
}

void	AForm::beSigned(Bureaucrat sign)
{
	try
	{
		if (sign.getGrade() <= this->getGrSign())
			this->iSigned = true;
		else
			throw AForm::GradeTooLowException();
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
}

const char *AForm::GradeTooHighException::what() const throw()
{
	return "Grade too high!!";
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return "Grade too low :((";
}

std::ostream& operator<<( std::ostream& out, AForm& AForm )
{
	out << "The AForm " << AForm.getName() << " requieres a grade " << AForm.getGrSign() << " to sign, a grade " << AForm.getGrExec() << " to execute and is ";
	if (AForm.getSigned())
		out << "signed";
	else
		out << "not signed";
    return out;
}
