/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: VR <VR@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 13:36:24 by VR                #+#    #+#             */
/*   Updated: 2024/09/23 13:31:24 by VR               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Animal.hpp"
# include "Dog.hpp"

Dog::Dog() : Animal()
{
	this->type = "Dog";
	std::cout << "Dog default constructor called." << std::endl;
	return ;
}

Dog::Dog(const Dog &copy) : Animal(copy)
{
	if (this != &copy)
		this->type = copy.type;
	std::cout << "Dog copy constructor called." << std::endl;
	return ;
}

Dog &Dog::operator=(const Dog &assign)
{
	if (this != &assign)
		this->type = assign.type;
	std::cout << "Dog copy assigment constructor called." << std::endl;
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called." << std::endl;
}

void Dog::MakeSound() const
{
	std::cout << "Im a dog and I say Gauff Gauff" << std::endl;
}
