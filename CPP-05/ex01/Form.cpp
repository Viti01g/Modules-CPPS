/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: VR <VR@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 16:34:20 by vruiz-go          #+#    #+#             */
/*   Updated: 2024/10/11 18:14:50 by VR               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Form.hpp"

Form::Form() : _name("Anonimo"), iSigned(false), gr_sign(1), gr_exec(1)
{
	std::cout << "Default Form constructor called." << std::endl;
	return ;
}

Form::Form(const std::string name, unsigned int _gr_sign, unsigned int _gr_exec) : _name(name), gr_sign(_gr_sign), gr_exec(_gr_exec)
{
    std::cout << "Form constructor called" << std::endl;
    if (gr_sign < 1)
        throw Form::GradeTooHighException();
    else if (gr_sign > 150)
        throw Form::GradeTooLowException();
    if (gr_exec < 1)
        throw Form::GradeTooHighException();
    else if (gr_exec > 150)
        throw Form::GradeTooLowException();
}

Form::~Form()
{
	std::cout << "Form Destructor called." << std::endl;
	return ;
}

Form::Form(const Form &copy) : _name(copy._name), gr_sign(copy.gr_sign), gr_exec(copy.gr_exec)
{
	if (this != &copy)
		this->iSigned = copy.iSigned;
	std::cout << "Form copy constructor called." << std::endl;
	return ;
}

Form &Form::operator=(const Form &assign)
{
	if (this != &assign)
		this->iSigned = assign.iSigned;
	std::cout << "Form assign constructor called." << std::endl;
	return *this;
}

std::string Form::getName() const
{
	return (this->_name);
}

bool Form::getSigned()
{
	return (this->iSigned);
}

unsigned int Form::getGrSign() const
{
	return (this->gr_sign);
}

unsigned int Form::getGrExec() const
{
	return (this->gr_exec);
}

void	Form::beSigned(Bureaucrat sign)
{
	try
	{
		if (sign.getGrade() <= this->getGrSign())
			this->iSigned = true;
		else
			throw Form::GradeTooLowException();
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
}

const char *Form::GradeTooHighException::what() const throw()
{
	return "Grade too high!!";
}

const char *Form::GradeTooLowException::what() const throw()
{
	return "Grade too low :((";
}

std::ostream& operator<<( std::ostream& out, Form& form )
{
	out << "The Form " << form.getName() << " requieres a grade " << form.getGrSign() << " to sign, a grade " << form.getGrExec() << " to execute and is ";
	if (form.getSigned())
		out << "signed";
	else
		out << "not signed";
    return out;
}
