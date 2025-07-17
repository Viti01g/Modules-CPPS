/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: VR <VR@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 16:38:55 by VR                #+#    #+#             */
/*   Updated: 2025/07/17 18:57:21 by VR               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "RPN.hpp"

#define RESET   "\033[0m"
#define RED 	"\e[1;91m"

int main( int argc, char **argv ) {
	if (argc != 2) {
		std::cout << RED << "Invalid number of arguments" << RESET << '\n';
		return 1;
	}
	try {
		RPN::calculate( argv[1] );

	} catch (std::exception& e) {
		std::cout << RED << e.what() << RESET << '\n';
		return 1;
	}

	return 0;
}
