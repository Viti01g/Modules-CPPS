/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vruiz-go <vruiz-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 17:45:31 by vruiz-go          #+#    #+#             */
/*   Updated: 2024/10/01 13:39:14 by vruiz-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	if (INFO == 1)
		std::cout << "Cure default constructor called" << std::endl;
}

Cure::Cure(const Cure& other) : AMateria("cure")
{
	if (INFO == 1)
		std::cout << "Cure copy constructor called" << std::endl;
	_type = other._type;
}

Cure::~Cure()
{
	if (INFO == 1)
		std::cout << "Cure destructor called" << std::endl;
}

Cure& Cure::operator=(const Cure& other)
{
	if (INFO == 1)
		std::cout << "Cure copy assignment operator called" << std::endl;
	if (this != &other)
		this->_type = other._type;
	return *this;
}

AMateria* Cure::clone() const
{
	if (INFO == 1)
		std::cout << "Cure clone function called" << std::endl;
	AMateria* cloneInstance = new Cure();
	return cloneInstance;
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}