/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: VR <VR@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 13:36:35 by VR                #+#    #+#             */
/*   Updated: 2024/09/23 20:24:33 by VR               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cat.hpp"

Cat::Cat() : Animal()
{
	this->type = "Cat";
	this->brain = new Brain();
	std::cout << "Cat default constructor called." << std::endl;
	return ;
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
	if (this != &copy)
	{
		this->type = copy.type;
		delete brain;
		this->brain = new Brain(*copy.brain);
	}
	std::cout << "Cat copy constructor called." << std::endl;
	return ;
}

Cat	&Cat::operator=(const Cat &assign)
{
	if (this != &assign)
	{
		this->type = assign.type;
		delete brain;
		this->brain = new Brain(*assign.brain);
	}
	return (*this);
	std::cout << "Cat copy assigment constructor called." << std::endl;
	return *this;
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << "Cat destructor called." << std::endl;
	return ;
}

void	Cat::MakeSound() const
{
	std::cout << "Miau Miau" << std::endl;
	return ;
}
