/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vruiz-go <vruiz-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 13:36:41 by VR                #+#    #+#             */
/*   Updated: 2024/10/17 12:31:58 by vruiz-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "AAnimal.hpp"

AAnimal::AAnimal()
{
	this->type = "AAnimal";
	std::cout << "Default AAnimal constructor called." << std::endl;
	return ;
}

AAnimal::AAnimal(const AAnimal &copy)
{
	if (this != &copy)
		this->type = copy.type;
	std::cout << "AAnimal copy constructor called." << std::endl;
	return ;
}

AAnimal &AAnimal::operator=(const AAnimal &assign)
{
	if (this != &assign)
		this->type = assign.type;
	std::cout << "AAnimal reference constructor called." << std::endl;
	return *this;
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal destructor called." << std::endl;
	return ;
}

const	std::string AAnimal::getType() const
{
	return this->type;
}

void	AAnimal::MakeSound() const
{
	std::cout << "Sound of any animal noises." << std::endl;
}
