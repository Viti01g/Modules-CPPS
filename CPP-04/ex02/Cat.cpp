/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vruiz-go <vruiz-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 13:36:35 by VR                #+#    #+#             */
/*   Updated: 2024/10/17 12:18:53 by vruiz-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cat.hpp"

Cat::Cat() : AAnimal()
{
	this->type = "Cat";
	std::cout << "Cat default constructor called." << std::endl;
	return ;
}

Cat::Cat(const Cat &copy) : AAnimal(copy)
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
