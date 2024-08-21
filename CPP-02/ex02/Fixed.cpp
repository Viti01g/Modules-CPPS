/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: VR <VR@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 15:43:26 by vruiz-go          #+#    #+#             */
/*   Updated: 2024/08/21 17:34:40 by VR               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"

Fixed::Fixed() : fixed_point_value(0)
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

bool Fixed::operator>(const Fixed &other_fixed)
{
	return (this->fractional_bits > other_fixed.getRawBits());
}

bool Fixed::operator<(const Fixed &other_fixed)
{
	return (this->fractional_bits < other_fixed.getRawBits());
}

bool Fixed::operator>=(const Fixed &other_fixed)
{
	return (this->fractional_bits >= other_fixed.getRawBits());
}

bool Fixed::operator<=(const Fixed &other_fixed)
{
	return (this->fractional_bits <= other_fixed.getRawBits());
}

bool Fixed::operator==(const Fixed &other_fixed)
{
	return (this->fractional_bits == other_fixed.getRawBits());
}

bool Fixed::operator!=(const Fixed &other_fixed)
{
	return (this->fractional_bits != other_fixed.getRawBits());
}

float Fixed::operator+(const Fixed &other_fixed)
{
	float result = this->toFloat() + other_fixed.toFloat();
	return result;
}

float Fixed::operator-(const Fixed &other_fixed)
{
	float result = this->toFloat() - other_fixed.toFloat();
	return result;
}

float Fixed::operator*(const Fixed &other_fixed)
{
	float result = this->toFloat() * other_fixed.toFloat();
	return result;
}

float Fixed::operator/(const Fixed &other_fixed)
{
	float result = this->toFloat() / other_fixed.toFloat();
	return result;
}

Fixed &Fixed::operator++()
{
	this->fixed_point_value += 1;
	return *this;
}

Fixed &Fixed::operator--()
{
	this->fixed_point_value -= 1;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed aux = (*this);
	++(*this);
	return aux;
}

Fixed Fixed::operator--(int)
{
	Fixed aux = (*this);
	--(*this);
	return aux;
}

Fixed &Fixed::min(Fixed &fixed1, Fixed &fixed2)
{
	if (fixed1.getRawBits() < fixed2.getRawBits())
		return fixed1;
	return fixed2;
}

const Fixed &Fixed::min(Fixed const &fixed1, Fixed const &fixed2)
{
	if (fixed1.getRawBits() < fixed2.getRawBits())
		return fixed1;
	return fixed2;
}

Fixed &Fixed::max(Fixed &fixed1, Fixed &fixed2)
{
	if (fixed1.getRawBits() > fixed2.getRawBits())
		return fixed1;
	return fixed2;
}

const Fixed &Fixed::max(Fixed const &fixed1, Fixed const &fixed2)
{
	if (fixed1.getRawBits() > fixed2.getRawBits())
		return fixed1;
	return fixed2;
}
