/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vruiz-go <vruiz-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 14:01:05 by vruiz-go          #+#    #+#             */
/*   Updated: 2024/10/28 13:08:05 by vruiz-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>
#include <cstring>
#include <climits>
#include <cmath>

enum	scalarType {
	CHAR,
	INT,
	FLOAT,
	DOUBLE,
	ERROR
};

class ScalarConverter
{
	public:
		ScalarConverter();
		~ScalarConverter();
		ScalarConverter(const ScalarConverter &copy);
		ScalarConverter &operator=(const ScalarConverter &assign);

		static void	converter(char *literal);
} ;

# endif
