/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: VR <VR@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 13:36:05 by VR                #+#    #+#             */
/*   Updated: 2025/07/01 15:54:03 by VR               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "span.hpp"

Span::Span() 
{
	std::cout << "Default Span constructor called." << std::endl;
	return ;
}

Span::Span(unsigned int num)
{
	maxSize = num;
	return ;
}

Span::~Span()
{
	std::cout << "Span Destructor called." << std::endl;
}

Span::Span(const Span& other)
{
	*this = other;
	return ;
}

Span& Span::operator=(const Span& other)
{
	if (this != &other)
	{
		this->container = other.container;
		this->maxSize = other.maxSize;
	}
	return *this;
}

const char* Span::spanFullException::what() const throw()
{
	return "cannot add more items, span is full";
}

const char* Span::notEnoughNumbersException::what() const throw()
{
	return "span does not have enough numbers";
}
