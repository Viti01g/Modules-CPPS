/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vruiz-go <vruiz-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 15:50:14 by vruiz-go          #+#    #+#             */
/*   Updated: 2024/09/19 15:50:15 by vruiz-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( void ): ClapTrap(100, 100, 30, "Default")
{
	std::cout << "FragTrap " << this->_name << " constructor called" << std::endl;
}

FragTrap::FragTrap( const FragTrap &fragtrap ): ClapTrap(fragtrap._HP, fragtrap._EP, fragtrap._AD, fragtrap._name)
{
	std::cout << "FragTrap " << fragtrap._name << " copy contructor called" << std::endl;
}

FragTrap	&FragTrap::operator=(const FragTrap &fragtrap)
{
	if (this != &fragtrap)
	{
		std::cout << "FragTrap " << fragtrap._name << " copied into " << this->_name << std::endl;
		this->_name = fragtrap._name;
		this->_HP = fragtrap._HP;
		this->_AD = fragtrap._AD;
		this->_EP = fragtrap._EP;
	}
	return (*this);
}

FragTrap::~FragTrap( void )
{
	std::cout << "FragTrap " << this->_name << " destructor called" << std::endl;
}

FragTrap::FragTrap( std::string name ): ClapTrap(100, 100, 30, name)
{
	std::cout << "FragTrap " << this->_name << " constructor called" << std::endl;
}

void	FragTrap::highFivesGuys( void )
{
	std::string	five;

	std::cout << "FragTrap " << this->_name << "requests a high five!(press enter to high five)";
	std::getline(std::cin, five);
}

int	FragTrap::getAd( void )
{
	return (30);
}

int	FragTrap::getHp( void )
{
	return (100);
}

int	FragTrap::getEp( void )
{
	return (100);
}

std::string	FragTrap::getName( void )
{
	return (this->_name);
}