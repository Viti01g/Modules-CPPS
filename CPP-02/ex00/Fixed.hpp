/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vruiz-go <vruiz-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 18:25:21 by VR                #+#    #+#             */
/*   Updated: 2024/08/20 15:38:19 by vruiz-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>

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
};

# endif
