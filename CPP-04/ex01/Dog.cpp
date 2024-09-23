/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: VR <VR@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 13:36:24 by VR                #+#    #+#             */
/*   Updated: 2024/09/23 20:31:07 by VR               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Animal.hpp"
# include "Dog.hpp"

Dog::Dog() : Animal()
{
	this->type = "Dog";
	this->brain = new Brain();
	std::cout << "Dog default constructor called." << std::endl;
	return ;
}

Dog::Dog(const Dog &copy) : Animal(copy)
{
	if (this != &copy)
	{
		this->type = copy.type;
		delete brain;
		this->brain = new Brain(*copy.brain);
	}
	std::cout << "Dog copy constructor called." << std::endl;
	return ;
}

Dog &Dog::operator=(const Dog &assign)
{
	if (this != &assign)
	{
		this->type = assign.type;
		delete brain;
		this->brain = new Brain(*assign.brain);
	}
	std::cout << "Dog copy assigment constructor called." << std::endl;
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called." << std::endl;
	delete this->brain;
	return ;
}

void Dog::MakeSound() const
{
	std::cout << "Im a dog and I say Gauff Gauff" << std::endl;
	return ;
}
