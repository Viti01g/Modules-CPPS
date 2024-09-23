/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: VR <VR@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 13:36:41 by VR                #+#    #+#             */
/*   Updated: 2024/09/19 19:31:46 by VR               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Animal.hpp"

Animal::Animal()
{
	this->type = "Animal";
	std::cout << "Default Animal constructor called." << std::endl;
	return ;
}

Animal::Animal(const Animal &copy)
{
	if (this != &copy)
		this->type = copy.type;
	std::cout << "Animal copy constructor called." << std::endl;
	return ;
}

Animal &Animal::operator=(const Animal &assign)
{
	if (this != &assign)
		this->type = assign.type;
	std::cout << "Animal reference constructor called." << std::endl;
	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called." << std::endl;
	return ;
}

const	std::string Animal::getType() const
{
	return this->type;
}

void	Animal::MakeSound() const
{
	std::cout << "Sound of any animal noises." << std::endl;
}
