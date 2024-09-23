/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: VR <VR@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 15:03:53 by VR                #+#    #+#             */
/*   Updated: 2024/09/23 13:31:51 by VR               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "WrongCat.hpp"
# include "WrongAnimal.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	this->type = "Not a Cat";
	std::cout << "WrongCat default constructor called." << std::endl;
	return ;
}

WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal(copy)
{
	if (this != &copy)
		this->type = copy.type;
	std::cout << "WrongCat copy constructor called." << std::endl;
	return ;
}

WrongCat &WrongCat::operator=(const WrongCat &assign)
{
	if (this != &assign)
		this->type = assign.type;
	std::cout << "WrongCat copy assigment constructor called." << std::endl;
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << "Wroncat destructor called." << std::endl;
	return ;
}

void WrongCat::MakeSound() const
{
	std::cout << "beeeeeeee" << std::endl;
	return ;
}
