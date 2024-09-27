/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vruiz-go <vruiz-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 12:45:38 by VR                #+#    #+#             */
/*   Updated: 2024/09/26 16:56:10 by vruiz-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScavTrap.hpp"
# include "ClapTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	this->name = "Unrecognized";
	this->attackDmg = 10;
	this->energy = 50;
	this->health = 100;
	std::cout << "Scavtrap Default Constructor called" << std::endl;
	return ;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap()
{
	this->name = name;
	this->attackDmg = 10;
	this->energy = 50;
	this->health = 100;
	std::cout << "Scavtrap Constructor called" << std::endl;
	return ;
}

ScavTrap::ScavTrap(const ScavTrap &cpy) : ClapTrap()
{
	std::cout << "Copy constructor called" << std::endl;
	if (this != &cpy)
	{
		this->name = cpy.name;
		this->health = cpy.health;
		this->energy = cpy.energy;
		this->attackDmg = cpy.attackDmg;
	}
	return ;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &asigment)
{
	std::cout << "Asigment constructor called" << std::endl;
	if (this != &asigment)
	{
		this->name = asigment.name;
		this->health = asigment.health;
		this->energy = asigment.energy;
		this->attackDmg = asigment.attackDmg;
	}
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "Destructor called" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
	if (this->health > 0 && this->energy > 0)
	{
		std::cout << "Scavtrap " << this->name << " attacks " << target << ", causing " << this->attackDmg << " points of damage!" << std::endl;
		this->energy--;
	}
	return ;
}

void ScavTrap::GuardGate()
{
	std::cout << "ScavTrap " << this->name << " is now in Gate Keeper mode." << std::endl;
}
