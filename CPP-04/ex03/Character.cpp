/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vruiz-go <vruiz-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 13:47:24 by vruiz-go          #+#    #+#             */
/*   Updated: 2024/09/26 17:31:12 by vruiz-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Character.hpp"

Character::Character(void) : _name("unknown"), _unequippedSize(0)
{
	if (INFO == 1)
		std::cout << "Character default constructor called" << std::endl;
	int	pos = 0;
	while (pos < 4)
	{
		this->_inventory[pos] = NULL;
		pos++;
	}
	this->_unequipped = NULL;
}

Character::Character(const std::string name) : _name(name), _unequippedSize(0)
{
	if (INFO == 1)
		std::cout << "Character default constructor with name called" << std::endl;
	int	pos = 0;
	while (pos < 4)
	{
		this->_inventory[pos] = NULL;
		pos++;
	}
	this->_unequipped = NULL;
}

Character::Character(const Character& other) : _name(other._name), _unequippedSize(other._unequippedSize)
{
	if (INFO == 1)
		std::cout << "Character copy constructor called" << std::endl;
	int pos = 0;
	while (pos < 4)
	{
		if (other._inventory[pos] != NULL)
			this->_inventory[pos] = other._inventory[pos]->clone();
		else
			this->_inventory[pos] = NULL;
		pos++;
	}
	delete[] this->_unequipped;
	this->_unequipped = new AMateria*[other._unequippedSize];
	pos = 0;
	while (pos < other._unequippedSize)
	{
		this->_unequipped[pos] = other._unequipped[pos]->clone();
		pos++;
	}
}

Character::~Character(void)
{
	int pos = 0;
	while (pos < 4)
	{
		if (this->_inventory[pos] != NULL)
			delete this->_inventory[pos];
		pos++;
	}
	pos = 0;
	while (pos < this->_unequippedSize)
	{
		delete this->_unequipped[pos];
		pos++;
	}
	delete[] this->_unequipped;
	if (INFO == 1)
		std::cout << "Character destructor called" << std::endl;
}

Character& Character::operator=(const Character& other)
{
	if (INFO == 1)
		std::cout << "Character assignment operator called" << std::endl;
	if (this != &other)
	{
		this->_name = other._name;
		int	pos = 0;
		while (pos < 4)
		{
			if (other._inventory[pos] != NULL)
				this->_inventory[pos] = other._inventory[pos]->clone();
			else
				this->_inventory[pos] = NULL;
			pos++;
		}
		pos = 0;
		while (pos < this->_unequippedSize)
		{
			delete this->_unequipped[pos];
			pos++;
		}
		delete[] this->_unequipped;
		this->_unequippedSize = other._unequippedSize;
		this->_unequipped = new AMateria*[this->_unequippedSize];
		pos = 0;
		while (pos < this->_unequippedSize)
		{
			this->_unequipped[pos] = other._unequipped[pos]->clone();
			pos++;
		}
	}
	return *this;
}

std::string const & Character::getName() const
{
	return this->_name;
}

void Character::equip(AMateria* m)
{
	int pos = 0;
	while (pos < 4)
	{
		if (this->_inventory[pos] == NULL)
		{
			this->_inventory[pos] = m;
			break ;
		}
		pos++;
	}
	if (pos == 4)
	{
		AMateria** newArr = new AMateria*[this->_unequippedSize + 1];
		int pos = 0;
		while (pos < this->_unequippedSize)
		{
			newArr[pos] = this->_unequipped[pos];
			pos++;
		}
		delete[] this->_unequipped;
		newArr[pos] = m;
		this->_unequipped = newArr;
		this->_unequippedSize++;
	}
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx <= 3)
	{
		AMateria** newArr = new AMateria*[this->_unequippedSize + 1];
		int pos = 0;
		while (pos < this->_unequippedSize)
		{
			newArr[pos] = this->_unequipped[pos];
			pos++;
		}
		delete[] this->_unequipped;
		newArr[pos] = this->_inventory[idx];
		this->_unequipped = newArr;
		this->_inventory[idx] = NULL;
		this->_unequippedSize++;
	}
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx <= 3)
		if (this->_inventory[idx] != NULL)
			this->_inventory[idx]->use(target);
}
