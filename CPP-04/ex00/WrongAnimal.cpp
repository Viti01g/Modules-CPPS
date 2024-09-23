/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: VR <VR@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 19:18:22 by VR                #+#    #+#             */
/*   Updated: 2024/09/23 17:34:21 by VR               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal default constructor called." << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	if (this != &copy)
		this->type = copy.type;
	std::cout << "WrongAnimal copy constructor called." << std::endl;
	return ;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &assign)
{
	if (this != &assign)
		this->type = assign.type;
	std::cout << "WrongAnimal copy assigment constructor called." << std::endl;
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called." << std::endl;
	return ;
}

std::string WrongAnimal::getType() const
{
	return (this->type);
}

void	WrongAnimal::MakeSound() const
{
	std::cout << "Im not the animal u think." << std::endl;
	return ;
}
