/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: VR <VR@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 15:43:12 by vruiz-go          #+#    #+#             */
/*   Updated: 2024/08/21 16:30:10 by VR               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <cmath>

class Fixed
{
	private:
		int	fixed_point_value;
		static const int fractional_bits = 8;
	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed &other_fixed);
		Fixed &operator=(const Fixed &other_fixed);
		int getRawBits(void)const;
		void setRawBits(int const raw);
		Fixed(const int val);
		Fixed(const float valu);
		float toFloat(void)const;
		int toInt(void)const;

		bool operator>(const Fixed &other_fixed);
		bool operator<(const Fixed &other_fixed);
		bool operator>=(const Fixed &other_fixed);
		bool operator<=(const Fixed &other_fixed);
		bool operator==(const Fixed &other_fixed);
		bool operator!=(const Fixed &other_fixed);

		float operator+(const Fixed &other_fixed);
		float operator-(const Fixed &other_fixed);
		float operator*(const Fixed &other_fixed);
		float operator/(const Fixed &other_fixed);

		Fixed &operator++();
		Fixed &operator--();
		Fixed operator++(int);
		Fixed operator--(int);

		static Fixed &min(Fixed &fixed1, Fixed &fixed2);
		static const Fixed &min(Fixed const &fixed1, Fixed const &fixed2);
		static Fixed &max(Fixed &fixed1, Fixed &fixed2);
		static const Fixed &max(Fixed const &fixed1, Fixed const &fixed2);
};

std::ostream& operator<<(std::ostream& stream, const Fixed& fixed);

# endif
