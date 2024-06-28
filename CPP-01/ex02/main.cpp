/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vruiz-go <vruiz-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 17:48:40 by vruiz-go          #+#    #+#             */
/*   Updated: 2024/06/28 19:39:03 by vruiz-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>

int	main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *str_pointer = &str;
	std::string &str_reference = str;

	std::cout << "Address in memory of the string: " << &str << std::endl;
	std::cout << "Address in memory of the stringPTR: " << str_pointer << std::endl;
	std::cout << "Address in memory of the stringREF: " << &str_reference << std::endl;
	std::cout << "value of the string: " << str << std::endl;
	std::cout << "value of StringPTR: " << *str_pointer << std::endl;
	std::cout << "value of StringREF: " << str_reference << std::endl;
}
