/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vruiz-go <vruiz-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 15:49:03 by vruiz-go          #+#    #+#             */
/*   Updated: 2024/09/19 15:49:22 by vruiz-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ): ClapTrap(100, 50, 20, "Default")
{
	std::cout << "ScavTrap " << this->_name << " constructor called" << std::endl;
}

ScavTrap::~ScavTrap( void )
{
	std::cout << "ScavTrap " << this->_name << " destructor called" << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap &scavtrap): ClapTrap(scavtrap._HP, scavtrap._EP, scavtrap._AD, scavtrap._name)
{
	std::cout << "ScavTrap " << this->_name << " copy constructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=( const ScavTrap &scavtrap)
{
	if (&scavtrap != this)
	{
		std::cout << "ScavTrap " << scavtrap._name << " copied into " << this->_name << std::endl;
		this->_name = scavtrap._name;
		this->_HP = scavtrap._HP;
		this->_AD = scavtrap._AD;
		this->_EP = scavtrap._EP;
	}
	return (*this);	
}

ScavTrap::ScavTrap( std::string name ): ClapTrap(100, 50, 20, name)
{
	std::cout << "ScavTrap " << this->_name << " constructor called" << std::endl;
}

void	ScavTrap::guardGate( void )
{
	std::cout << this->_name << " ScavTrap is now in Gate keeper mode" << std::endl;
}

int	ScavTrap::getAd( void )
{
	return (20);
}

int	ScavTrap::getHp( void )
{
	return (100);
}

int	ScavTrap::getEp( void )
{
	return (50);
}

std::string	ScavTrap::getName( void )
{
	return (this->_name);
}
