/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: VR <VR@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 15:36:52 by VR                #+#    #+#             */
/*   Updated: 2024/08/23 19:59:16 by VR               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("Defectuoso")
{
	this->attackDmg = 0;
	this->energy = 10;
	this->health = 10;
	std::cout << "Default constructor called" << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string name)
{
	this->name = name;
	this->attackDmg = 0;
	this->health = 10;
	this->energy = 10;
	std::cout << this->name << " Constructor called" << std::endl;
	return ;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	if (this != &copy)
	{
		this->name = copy.name;
		this->health = copy.health;
		this->energy = copy.energy;
		this->attackDmg = copy.attackDmg;
	}
}

ClapTrap &ClapTrap::operator=(const ClapTrap &assign)
{
	std::cout << "Copy assignment construtor called" << std::endl;
	if (this != &assign)
	{
		this->name = assign.name;
		this->health = assign.health;
		this->energy = assign.energy;
		this->attackDmg = assign.attackDmg;
	}
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
	if (this->health > 0 && this->energy > 0)
	{
		std::cout << "Claptrap " << this->name << " attacks " << target << ", causing " << this->attackDmg << " points of damage!" << std::endl;
		this->energy--;
	}
	return ;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->name << " take damage from enemy and lost " << amount << " of his heal." << std::endl;
	this->health -= amount;
	return ;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->health > 0 && this->energy)
	{
		std::cout << "ClapTrap " << this->name << " restored " << amount << " points of his heal" << std::endl;
		this->energy--;
		this->health += amount;
		return ;
	}
}
