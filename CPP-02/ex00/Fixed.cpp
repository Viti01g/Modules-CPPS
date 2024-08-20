/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vruiz-go <vruiz-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 18:25:15 by VR                #+#    #+#             */
/*   Updated: 2024/08/20 15:36:21 by vruiz-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Constructor called" << std::endl;
	this->fixed_point_value = 0;
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
	std::cout << "GetRawBits member function called" << std::endl;
	return (this->fixed_point_value);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "SetRawBits member function called" << std::endl;
	this->fixed_point_value = raw;
	return ;
}
