/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vruiz-go <vruiz-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 13:49:57 by vruiz-go          #+#    #+#             */
/*   Updated: 2024/06/19 18:55:45 by vruiz-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "phonebook.hpp"
# include <iostream>

int main()
{
	std::string command;

	std::cout << "Welcome to the phonebook!" << std::endl;
	
	/* std::string hola;
	std::getline(std::cin, hola);

	std::cout << hola << '\n'; */
	Phonebook vini_Es_bobo;

 	while (1)
	{
		std::cout << "Please enter a command: ";
		
		std::cin >> command;
		if (std::cin.fail())
			return 1;
		if (command == "EXIT")
		{
			std::cout << "Goodbye!" << std::endl;
			break ;
		}
		else if (command == "ADD")
		{
			vini_Es_bobo.agregar_contact();
			std::cout << "Adding a contact..." << std::endl;
		}
		else if (command == "SEARCH")
		{
			std::cout << "Searching for a contact..." << std::endl;
			vini_Es_bobo.mostrarContacto();
		}
		else
		{
			std::cout << "Invalid command. Please try again." << std::endl;
		}
		command = "";
	}
	return (0);
}
