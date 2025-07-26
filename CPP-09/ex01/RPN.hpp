/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: VR <VR@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 17:26:59 by VR                #+#    #+#             */
/*   Updated: 2025/07/26 15:43:02 by VR               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# ifndef RPN_HPP
# define RPN_HPP

# include <stack>
# include <iostream>
# include <string>
# include <fstream>
# include <cstring>

#define ADD			43
#define SUBTRACT	45
#define MULTIPLY	42
#define DIVIDE		47


class RPN
{
	private:
		static std::stack<double> myStack;

		RPN();
		RPN( const RPN& other );
		~RPN();

		class emptyStringException : public std::exception {
			const char* what() const throw();
		};

		class wrongInputException : public std::exception {
			const char* what() const throw();
		};

	public:
		RPN& operator=( const RPN& other );
		static void calculate( std::string input );
};

# endif
