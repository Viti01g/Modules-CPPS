/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: VR <VR@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 15:50:41 by VR                #+#    #+#             */
/*   Updated: 2024/09/17 15:00:47 by VR               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "FragTrap.hpp"
# include "ClapTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	this->name = "Unrecognized";
	this->attackDmg = 30;
	this->energy = 100;
	this->health = 100;
	std::cout << "Default FragTrap constructor called." << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called." << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->name = name;
	this->attackDmg = 30;
	this->energy = 100;
	this->health = 100;
	std::cout << "Default FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy)
{
	std::cout << "Copy FragTrap constructor called" << std::endl;
	if (this != &copy)
	{
		this->name = copy.name;
		this->attackDmg = copy.attackDmg;
		this->energy = copy.energy;
		this->health = copy.health;
	}
	return ;
}

FragTrap &FragTrap::operator=(const FragTrap &assign)
{
	std::cout << "Assign FragTrap constructor called" << std::endl;
	if (this != &assign)
	{
		this->name = assign.name;
		this->attackDmg = assign.attackDmg;
		this->energy = assign.energy;
		this->health = assign.health;
	}
	return *this;
}

void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap: " << '"' << this->name << '"' << " wants to high five!!." << std::endl;
	return ;
}
