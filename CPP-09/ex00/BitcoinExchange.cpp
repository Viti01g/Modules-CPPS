/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: VR <VR@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 17:00:11 by VR                #+#    #+#             */
/*   Updated: 2025/07/11 17:21:44 by VR               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "BitcoinExchange.hpp"

/* CONSTRUCTORS /// DESTRUCTOR /// OPERATOR */
BitcoinExchange::BitcoinExchange(void) {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& other)
{
	this->_database = other._database;
	this->_inputDatabase = other._inputDatabase;
}

BitcoinExchange::~BitcoinExchange(void) {}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& other)
{
	if (this != &other)
	{
		this->_database = other._database;
		this->_inputDatabase = other._inputDatabase;
	}
	return *this;
}

/* MEMBER FUNCTIONS */
void BitcoinExchange::saveDatabase(std::ifstream& file)
{
	std::string line;
	std::string date;
	std::string exchangeRate;
	
	std::getline(file, line);
	while (std::getline(file, line))
	{
		std::stringstream ss(line);
		std::getline(ss, date, ',');
		std::getline(ss, exchangeRate, ',');
		this->_database.insert(std::make_pair(date, std::atof(exchangeRate.c_str())));
	}
}

void BitcoinExchange::printValues(std::ifstream& file)
{
	std::string line;
	std::string date;
	std::string value;
	float result;
	float floatValue;
	bool error;
	
	std::getline(file, line);
	if (line != "date | value")
		std::cout << "Error: bad header." << std::endl;
	while (std::getline(file, line))
	{
		error = false;
		checkInvalidFormat(line, error);
		std::stringstream ss(line);
		std::getline(ss, date, '|');
		std::getline(ss, value, '|');
		if (date[date.length() - 1] == ' ')
			date.erase(date.length() - 1, 1);
		if (value[0] == ' ')
			value.erase(0, 1);
		if (!error && invalidDate(date))
		{
			error = true;
			std::cout << "Error: bad input => " << line << std::endl;
		}
		checkInvalidValue(value, error);
		if (!error)
		{
			if (wrongYear(date))
				std::cout << "Error: bitcoin was not available at this date => " << date << std::endl;
			else
			{
				floatValue = std::atof(value.c_str());
				result = getResult(this->_database, date, floatValue);
				std::cout << date << " => " << value << " = " << result << std::endl;
			}
		}
	}
}

/* SUPLEMENTARY FUNCTIONS */

// Invalid date check:
static bool notDigit(char c)
{
	if (c >= '0' && c <= '9')
		return false;
	else
		return true;
}

static bool isLeapYear(int year)
{
  if (year % 400 == 0)
    return true;
  else if (year % 100 == 0)
    return false;
  else if (year % 4 == 0)
    return true;
  else
    return false;
}

static bool wrongNumDaysInMonth(const std::string& date)
{
	int year = std::atoi(date.c_str());
	int month = std::atoi(date.c_str() + 5);
	int day = std::atoi(date.c_str() + 8);

	if (day >= 1 && day <= 31 && (month == 1
		|| month == 3 || month == 5 || month == 7
		|| month == 8 || month == 10 || month == 12))
		return false;
	else if (day >= 1 && day <= 30 && (month == 4
					|| month == 6 || month == 9 || month == 11))
		return false;
	else if (month == 2
				&& ((isLeapYear(year) && day >= 1 && day <= 29)
				|| (!isLeapYear(year) && day >= 1 && day <= 28)))
		return false;
	return true;
}

bool wrongYear(const std::string& date)
{
	int year = std::atoi(date.c_str());
	int month = std::atoi(date.c_str() + 5);
	int day = std::atoi(date.c_str() + 8);

	if (year < 2009)
		return true;
	else if (year == 2009)
		if (month == 1 && day < 3)
			return true;
	return false;
}

bool invalidDate(const std::string& date)
{
	size_t pos = 0;

	if (date.length() != 10)
		return true;
	while (pos < date.length())
	{
		if (pos < 4 && notDigit(date[pos]))
			return true;
		else if (pos == 4 && date[pos] != '-')
			return true;
		else if (pos == 5 && date[pos] != '1' && date[pos] != '0')
			return true;
		else if (pos == 6)
		{
			if (((date[pos - 1] == '1' && (date[pos] < '0' || date[pos] > '2'))
				|| (date[pos - 1] == '0' && date[pos] == '0' && notDigit(date[pos]))))	
				return true;
		}
		else if (pos == 7 && date[pos] != '-')
			return true;
		else if (pos == 8 && (date[pos] < '0' || date[pos] > '3'))
			return true;
		else if (pos == 9)
		{
			if (((date[pos - 1] == '3' && (date[pos] != '0' && date[pos] != '1'))
				|| (date[pos - 1] < '3' && date[pos - 1] >= '0' && notDigit(date[pos]))))	
				return true;
		}
		if (wrongNumDaysInMonth(date))
			return true;
		pos++;
	}
	return false;
}

// Invalid value check:
static size_t getLastDigitBeforePoint(std::string& numberString)
{
	size_t pos = 0;
	size_t len = numberString.length();
	
	while (pos < len)
	{
		if (numberString[pos] == '.')
			break ;
		pos++;
	}
	numberString[pos - 1] = 0;
	return pos;
}

static bool onlyDigits(const std::string& literal)
{
	size_t len = literal.length();
	size_t pos = 0;
	size_t dotCount = 0;

	while (pos < len)
	{
		if (!std::isdigit(literal[pos]) && literal[pos] != '.' && literal[pos] != '-')
			return false;
		if (literal[pos] == '-' && pos != 0)
			return false;
		if (literal[pos] == '.')
			dotCount++;
		pos++;
	}
	if (dotCount > 1)
		return false;
	return true;
}

bool hasOverflow(const std::string& literal)
{
	std::string numberString;
	int lastDigitInt;
	int numberInt ;
	size_t lastDigitIndex;
	bool isNumber = onlyDigits(literal);
	bool isNegative = false;

	if (!isNumber)
		return false;
	numberString = literal;
	lastDigitIndex = getLastDigitBeforePoint(numberString);
	if (((literal[0] == '-' && lastDigitIndex > 11) || (literal[0] != '-' && lastDigitIndex > 10)))
		return true;
	lastDigitInt = std::atoi(literal.c_str() + lastDigitIndex - 1);
	numberInt = std::atoi(numberString.c_str());
	if (numberInt < 0)
	{
		numberInt *= -1;
		isNegative = true;
	}
	if (numberInt >= 214748364)
	{
		if (isNegative && numberInt == 214748364 && lastDigitInt > 8)
			return true;
		else if (!isNegative && numberInt == 214748364 && lastDigitInt > 7)
			return true;
		else if (numberInt > 214748364)
			return true;
	}
	return false;
}

void checkInvalidValue(const std::string& value, bool& error)
{
	bool overflowDetected = hasOverflow(value);

	if (!onlyDigits(value))
	{
		if (!error)
			std::cout << "Error: value is invalid." << std::endl;
		error = true;
	}
	else  if (overflowDetected && value[0] != '-')
	{
		if (!error)
			std::cout << "Error: too large a number." << std::endl;
		error = true;
	}
	else if (!overflowDetected && std::atoi(value.c_str()) > 1000)
	{
		if (!error)
			std::cout << "Error: too large a number." << std::endl;
		error = true;
	}
	else if (value[0] == '-')
	{
		if (!error)
			std::cout << "Error: not a positive number." << std::endl;
		error = true;
	}
}

// Check Invalid Format:
void checkInvalidFormat(const std::string& line, bool& error)
{
	int pipeCount = 0;
	int spaceCount = 0;
	int nbrCount = 0;

	size_t pos = 0;
	while (pos < line.length())
	{
		if (line[pos] == '|')
			pipeCount++;
		if (line[pos] == ' ')
			spaceCount++;
		if (spaceCount == 2 && line[pos] >= '0' && line[pos] <= '9')
			nbrCount++;
		pos++;
	}
	if (pipeCount != 1 || spaceCount != 2 || nbrCount == 0)
	{
		error = true;
		std::cout << "Error: bad input => " << line << std::endl;
	}
}

// Get near date functions:
static void getDate(const std::string& date, int& year, int& month, int& day)
{
	year = std::atoi(date.c_str());
	month = std::atoi(date.c_str() + 5);
	day = std::atoi(date.c_str() + 8);
}

static void getDifference(const std::string& date, const std::string& nearDate,
		int& yearDiff, int& monthDiff, int& dayDiff)
{
	int year, month, day;
	int nearYear, nearMonth, nearDay;
	
	getDate(date, year, month, day);
	getDate(nearDate, nearYear, nearMonth, nearDay);

	yearDiff = year - nearYear;
	if (yearDiff < 0)
		yearDiff *= -1;
	monthDiff = month - nearMonth;
	if (monthDiff < 0)
		monthDiff *= -1;
	dayDiff = day - nearDay;
	if (dayDiff < 0)
		dayDiff *= -1;
}

static bool isNearDate(BitcoinExchange::Iterator& nearestDate,
		BitcoinExchange::Iterator& newDate, std::string& date)
{
	int newYearDiff, newMonthDiff, newDayDiff;
	int nearYearDiff, nearMonthDiff, nearDayDiff;
	
	getDifference(date, newDate->first, newYearDiff, newMonthDiff, newDayDiff);
	getDifference(date, nearestDate->first, nearYearDiff, nearMonthDiff, nearDayDiff);

	if (newYearDiff < nearYearDiff)
		return true;
	else if (newYearDiff == nearYearDiff)
	{
		if (newMonthDiff < nearMonthDiff)
			return true;
		else if (newMonthDiff == nearMonthDiff)
			if (newDayDiff < nearDayDiff)
				return true;
	}
	return false;
}

static bool isBeforeDate(BitcoinExchange::Iterator& newDate, std::string& date)
{
	int year, month, day;
	int newYear, newMonth, newDay;
	
	getDate(date, year, month, day);
	getDate(newDate->first, newYear, newMonth, newDay);

	if (newYear < year)
		return true;
	else if (newYear == year)
	{
		if (newMonth < month)
			return true;
		else if (newMonth == month)
			if (newDay < day)
				return true;
	}
	return false;
}

// Get value of the Bitcoins:
float getResult(BitcoinExchange::Database& database, std::string& date, float& btc)
{
	BitcoinExchange::Iterator iter = database.begin();
	BitcoinExchange::Iterator end = database.end();

	BitcoinExchange::Iterator nearestDate;

	while (iter != end)
	{
		if (iter == database.begin())
			nearestDate = iter;
		if (isNearDate(nearestDate, iter, date) && isBeforeDate(iter, date))
			nearestDate = iter;
		if (iter->first == date)
			return iter->second * btc;
		iter++;
	}
	return nearestDate->second * btc;
}
