/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Filter.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: VR <VR@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 18:25:21 by VR                #+#    #+#             */
/*   Updated: 2024/07/26 18:54:04 by VR               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FILTER_HPP
# define FILTER_HPP

# include <iostream>
# include <string>

class Fixed
{
	private:
		int	fixed_point_value;
		static const int fractional_bits;
	public:
		Fixed();
		~Fixed();
};

# endif
