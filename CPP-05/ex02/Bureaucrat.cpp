/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: VR <VR@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 15:53:29 by vruiz-go          #+#    #+#             */
/*   Updated: 2024/10/14 16:38:04 by VR               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	std::cout << "Bureaucrat default constructor called." << std::endl;
	return ;
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->_range = grade;
	std::cout << "Bureaucrat constructor called." << std::endl;
	return ;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy)
{
	if (this != &copy)
		this->_range = copy._range;
	std::cout << "Bureaucrat copy constructor called." << std::endl;
	return ;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Destructor called." << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &assign)
{
	if (this != &assign)
		this->_range = assign._range;
	std::cout << "Bureaucrat assign constructor called." << std::endl;
	return (*this);
}

unsigned int	Bureaucrat::getGrade() const
{
	return (this->_range);
}

std::string	Bureaucrat::getName() const
{
	return (this->_name);
}

void	Bureaucrat::IncrementGrade()
{
	if (this->_range > 1)
		this->_range--;
	return ;
}

void	Bureaucrat::DecrementGrade()
{
	if (this->_range < 150)
		this->_range++;
	return ;
}

void	Bureaucrat::signForm(AForm &AForm)
{
	if (AForm.getSigned())
	{
		std::cout << this->getName() << " couldn’t sign " << AForm.getName()	<< " because it was already signed!" << std::endl;
		return ;	
	}
	AForm.beSigned(*this);
	if (AForm.getSigned())
		std::cout << this->getName() << " signed " << AForm.getName() << std::endl;
	else if (!AForm.getSigned())
		std::cout << this->getName() << " couldn’t sign " << AForm.getName() 
							<< " because has not enough grade!" << std::endl;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade too high!";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade too low!";
}

std::ostream& operator<<( std::ostream& out, const Bureaucrat& bureaucrat )
{
	out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return out;
}
