/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vruiz-go <vruiz-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 15:53:29 by vruiz-go          #+#    #+#             */
/*   Updated: 2024/10/08 19:16:14 by vruiz-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	std::cout << "Bureaucrat default constructor called." << std::endl;
	return ;
}

Bureaucrat::Bureaucrat(const std::string name, int grade)
{
	this->_name == name;
	this->_range == grade;
	std::cout << "Bureaucrat constructor called." << std::endl;
	return ;
}

Bureaucrat::Bureaucrat(const Bureaucrat &cpy)
{
	if (this != &cpy)
	{
		this->_name == cpy._name;
		this->_range == cpy._range;
	}
	std::cout << "Bureaucrat copy constructor called." << std::endl;
	return ;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &assign)
{
	if (this != &assign)
	{
		this->_name == assign._name;
		this->_range == assign._range;
	}
	std::cout << "Bureaucrat assign constructor called." << std::endl;
	return *this;
}
