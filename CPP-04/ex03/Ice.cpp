/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vruiz-go <vruiz-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 17:58:36 by vruiz-go          #+#    #+#             */
/*   Updated: 2024/10/01 13:40:08 by vruiz-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{
	if (INFO == 1)
		std::cout << "Ice default constructor called" << std::endl;
}

Ice::Ice(const Ice& other) : AMateria("ice")
{
	if (INFO == 1)
		std::cout << "Ice copy constructor called" << std::endl;
	_type = other._type;
}

Ice::~Ice(void)
{
	if (INFO == 1)
		std::cout << "Ice destructor called" << std::endl;
}

Ice& Ice::operator=(const Ice& other)
{
	if (INFO == 1)
		std::cout << "Ice copy assignment operator called" << std::endl;
	if (this != &other)
		this->_type = other._type;
	return *this;
}

AMateria* Ice::clone(void) const
{
	if (INFO == 1)
		std::cout << "Ice clone function called" << std::endl;
	AMateria* cloneInstance = new Ice();
	return cloneInstance;
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}