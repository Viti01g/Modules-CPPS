/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vruiz-go <vruiz-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 13:36:24 by VR                #+#    #+#             */
/*   Updated: 2024/10/17 12:19:14 by vruiz-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "AAnimal.hpp"
# include "Dog.hpp"

Dog::Dog() : AAnimal()
{
	this->type = "Dog";
	std::cout << "Dog default constructor called." << std::endl;
	return ;
}

Dog::Dog(const Dog &copy) : AAnimal(copy)
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
