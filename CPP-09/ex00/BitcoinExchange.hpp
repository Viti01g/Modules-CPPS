/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: VR <VR@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 17:00:06 by VR                #+#    #+#             */
/*   Updated: 2025/07/11 17:34:16 by VR               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <string>
# include <map>
# include <cstdlib>
# include <sstream>
# include <fstream>

# define CSV_FILE "data.csv"

class BitcoinExchange
{
	public:
		typedef std::map<std::string, float> Database;
		typedef std::map<std::string, float>::iterator Iterator;
		
		BitcoinExchange(void);
		BitcoinExchange(const BitcoinExchange& other);
		~BitcoinExchange(void);
		
		BitcoinExchange& operator=(const BitcoinExchange& other);

		void saveDatabase(std::ifstream& file);
		void printValues(std::ifstream& file);
	private:
		Database _database;
		Database _inputDatabase;
};

void checkInvalidFormat(const std::string& line, bool& error);
bool invalidDate(const std::string& date);
void checkInvalidValue(const std::string& value, bool& error);
bool wrongYear(const std::string& date);
float getResult(BitcoinExchange::Database& database, std::string& date, float& btc);

# endif
