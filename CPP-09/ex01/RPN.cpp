/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: VR <VR@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 17:26:53 by VR                #+#    #+#             */
/*   Updated: 2025/07/15 14:18:40 by VR               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

/* static member definition */
std::stack<double> RPN::myStack;

/* OCCF */
RPN::RPN()
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}
RPN::RPN(const RPN& other)
{
	std::cout << "Copy constructor called" << std::endl;
	(void) other;
	return ;
}
RPN& RPN::operator=(const RPN& other)
{
	std::cout << "Reference cinstructor called" << std::endl;
	(void) other;
	return *this;
}
RPN::~RPN()
{
	std::cout << "Destructor called." << std::endl;
}

/* Exceptions */
const char* RPN::emptyStringException::what() const throw()
{
	return "Error: The string is empty";
}

const char* RPN::wrongInputException::what() const throw()
{
	return "Error: Wrong input";
}

/* calculate --> Supported operations: + , - , * , /  */
// supported operations: + , - , / , *
void RPN::calculate(std::string input) 
{
	if (input.empty())
	{
		throw RPN::emptyStringException();
	}
	std::string::iterator it = input.begin();
	std::string::iterator itEnd = input.end();
	while (it != itEnd)
	{
		const char *op = NULL;
		while (std::isspace(*it))
			it++;
		if (it == itEnd)
			break;
		if ( std::isdigit(*it))
		{
			myStack.push( static_cast<double>(*it - '0'));
		} 
		else if ( (op = std::strchr("+-/*", *it)) != NULL)
		{
			if (myStack.size() < 2)
				throw RPN::wrongInputException();
			double a = myStack.top();
			myStack.pop();
			double b = myStack.top();
			myStack.pop();
			switch (static_cast<int>(*op))
			{
				case ADD:
					myStack.push(a + b);
					break;
				case SUBTRACT:
					myStack.push(b - a);
					break;
				case DIVIDE:
					myStack.push(b / a);
					break;
				case MULTIPLY:
					myStack.push(a * b);
					break;
				default:
					throw RPN::wrongInputException();
					break;
			}
		} else {
			throw RPN::wrongInputException();
		}
		it++;
	}
	if (myStack.size() == 1) {
		std::cout << myStack.top() << '\n';
		myStack.pop();
	} else {
		while (myStack.size() != 0) {
			myStack.pop();
		}
		throw RPN::wrongInputException();
	}
}