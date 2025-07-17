/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: VR <VR@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 16:38:59 by VR                #+#    #+#             */
/*   Updated: 2025/07/11 17:33:28 by VR               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

static int errorArguments(int argc)
{
	if (argc == 1)
			std::cout << "Error: could not open file." << std::endl;
	else
	{
		std::cout << "Error: wrong number of arguments." << std::endl;
		std::cout << "Usage: ./btc <database>" << std::endl;
	}
	return 1;
}

static int openFiles(std::ifstream& dbFile, std::ifstream& inputDbFile, const std::string filename)
{
	dbFile.open(CSV_FILE, std::ios::in);
	if (!dbFile.is_open())
	{
		std::cout << "Error: could not open database file." << std::endl;
		return (-1);
	}
	else if (dbFile.peek() == std::ifstream::traits_type::eof())
	{
		dbFile.close();
		std::cout << "Error: database file is empty." << std::endl;
		return (-1);
	}
	inputDbFile.open(filename, std::ios::in);
	if (!inputDbFile.is_open())
	{
		dbFile.close();
		std::cout << "Error: can't open file or is not accessible." << std::endl;
		return (-1);
	}
	else if (inputDbFile.peek() == std::ifstream::traits_type::eof())
	{
		dbFile.close();
		inputDbFile.close();
		std::cout << "Error: file is empty." << std::endl;
		return (-1);
	}
	return (0);
}

int main(int argc, char **argv)
{
	if (argc != 2)
		return errorArguments(argc);
	
	std::ifstream databaseFile;
	std::ifstream inputDatabaseFile;
	if (openFiles(databaseFile, inputDatabaseFile, argv[1]) == -1)
		return 1;
	
	BitcoinExchange btc;
	btc.saveDatabase(databaseFile);
	btc.printValues(inputDatabaseFile);
	databaseFile.close();
	inputDatabaseFile.close();
	return 0;
}
