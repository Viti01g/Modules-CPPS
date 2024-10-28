/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vruiz-go <vruiz-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 13:12:42 by vruiz-go          #+#    #+#             */
/*   Updated: 2024/10/28 13:15:30 by vruiz-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScalarConverter.hpp"

int main( int argc, char **argv ) {
	if (argc != 2) {
		std::cerr << "Please insert only one argument.\n" << std::endl;
		return 1;
	}

	ScalarConverter::converter(argv[1]);

	return 0;
}
