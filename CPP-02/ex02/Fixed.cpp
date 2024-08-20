/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vruiz-go <vruiz-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 15:43:26 by vruiz-go          #+#    #+#             */
/*   Updated: 2024/08/20 16:50:13 by vruiz-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed::Fixed(const Fixed &other_fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	this->fixed_point_value = other_fixed.getRawBits();
	return ;
}

Fixed &Fixed::operator=(const Fixed &other_fixed)
{
	std::cout << "Copy assigment operator called" << std::endl;
	if (this != &other_fixed)
		this->fixed_point_value =other_fixed.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void)const
{
	return (this->fixed_point_value);
}

void Fixed::setRawBits(int const raw)
{
	this->fixed_point_value = raw;
	return ;
}

Fixed::Fixed(const int val)
{
	std::cout << "Int constructor called" << std::endl;
	this->fixed_point_value = roundf(val *(1 << fractional_bits));
	return ;
}

Fixed::Fixed(const float valu)
{
	std::cout << "Float constructor called" << std::endl;
	this->fixed_point_value = roundf(valu *(1 << fractional_bits));
	return ;
}

float Fixed::toFloat(void)const
{
	float new_num;

	new_num = this->getRawBits() / (double)(1 << fractional_bits);
	return (new_num);
}

int Fixed::toInt(void)const
{
	int	new_num;
	new_num = roundf(this->getRawBits() / (double)(1 << fractional_bits));
	return (new_num);
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat() << std::endl;
	return out;
}
