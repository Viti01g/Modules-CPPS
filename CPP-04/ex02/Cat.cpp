/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: VR <VR@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 13:36:35 by VR                #+#    #+#             */
/*   Updated: 2024/09/23 13:15:48 by VR               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cat.hpp"

Cat::Cat() : Animal()
{
	this->type = "Cat";
	std::cout << "Cat default constructor called." << std::endl;
	return ;
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
	if (this != &copy)
		this->type = copy.type;
	std::cout << "Cat copy constructor called." << std::endl;
	return ;
}

Cat	&Cat::operator=(const Cat &assign)
{
	if (this != &assign)
		this->type = assign.type;
	std::cout << "Cat copy assigment constructor called." << std::endl;
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called." << std::endl;
	return ;
}

void	Cat::MakeSound() const
{
	std::cout << "Miau Miau" << std::endl;
	return ;
}