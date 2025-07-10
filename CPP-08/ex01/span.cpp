/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: VR <VR@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 13:36:05 by VR                #+#    #+#             */
/*   Updated: 2025/07/07 13:38:53 by VR               ###   ########.fr       */
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

int Span::shortestSpan(void) const {
	if ( container.size() == 0 || container.size() == 1 )
		throw Span::notEnoughNumbersException();
	int result = INT_MAX;
	std::vector<int>::const_iterator it_begin = container.begin();
	while (it_begin < container.end()) {
		std::vector<int>::const_iterator it_next = it_begin + 1;
		while (it_next < container.end()) {
			int span = std::max( *it_begin, *it_next ) - std::min(*it_begin, *it_next);
			if (span < result)
				result = span;
			it_next++;
		}
		it_begin++;
	}
	return result;
}

int Span::longestSpan(void) const {
	if (container.size() == 0 || container.size() == 1)
		throw Span::notEnoughNumbersException();
	int result = 0;
	std::vector<int>::const_iterator it_begin = container.begin();
	while (it_begin < container.end()) {
		std::vector<int>::const_iterator it_next = it_begin + 1;
		while (it_next < container.end()) {
			int span = std::max( *it_begin, *it_next ) - std::min(*it_begin, *it_next);
			if (span > result)
				result = span;
			it_next++;
		}
		it_begin++;
	}
	return result;
}

void Span::addNumber(int nbr) {
	if (container.size() == this->maxSize)
		throw Span::spanFullException();
	container.push_back(nbr);
}
