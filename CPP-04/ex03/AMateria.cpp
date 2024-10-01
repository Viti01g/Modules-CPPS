/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vruiz-go <vruiz-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 13:26:25 by vruiz-go          #+#    #+#             */
/*   Updated: 2024/10/01 13:37:26 by vruiz-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void) : _type("none")
{
	if (INFO == 1)
		std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::AMateria(std::string const & type) : _type(type)
{
	if (INFO == 1)
		std::cout << "AMateria default constructor with type called" << std::endl;
}

AMateria::AMateria(const AMateria& other) : _type(other._type)
{
	if (INFO == 1)
		std::cout << "AMateria copy constructor called" << std::endl;
}

AMateria::~AMateria()
{
	if (INFO == 1)
		std::cout << "AMateria destructor called" << std::endl;
}

AMateria& AMateria::operator=(const AMateria& other)
{
	if (INFO == 1)
		std::cout << "AMateria copy assignment operator called" << std::endl;
	if (this != &other)
		this->_type = other._type;
	return *this;
}

void AMateria::use(ICharacter& target)
{
	std::cout << "??? " << target.getName() << std::endl;
}

std::string const& AMateria::getType(void) const
{
	return this->_type;
}