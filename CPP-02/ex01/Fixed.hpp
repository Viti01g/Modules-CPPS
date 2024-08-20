/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vruiz-go <vruiz-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 15:43:12 by vruiz-go          #+#    #+#             */
/*   Updated: 2024/08/20 16:48:56 by vruiz-go         ###   ########.fr       */
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
};

std::ostream& operator<<(std::ostream& stream, const Fixed& fixed);

# endif
