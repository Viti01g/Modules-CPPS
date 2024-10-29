/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vruiz-go <vruiz-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 14:01:10 by vruiz-go          #+#    #+#             */
/*   Updated: 2024/10/29 16:38:54 by vruiz-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
	std::cout << "Default Constructor called." << std::endl;
	return ;
}

ScalarConverter::ScalarConverter(const ScalarConverter &copy)
{
	(void)copy;
	return ;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &assign)
{
	(void)assign;
	return (*this);
}

ScalarConverter::~ScalarConverter()
{
	std::cout << "Destructor called." << std::endl;
	return ;
}

static void	printChar(int c)
{
	std::cout << "char: ";
	if (c >= CHAR_MIN && c <= CHAR_MAX) {
		std::isprint(c) ? std::cout << '\'' << static_cast<char>(c) << "\'\n" : std::cout << "Non displayable.\n";
	} else {
		std::cout << "impossible.\n";
	}
}

static void	charCase(char literal)
{
	printChar( static_cast<int>(literal) );
	std::cout << "int: " << static_cast<int>(literal) << '\n' << "float: " << static_cast<float>(literal) << ".0f\n" << "double: " << static_cast<double>(literal) << ".0" << std::endl;

}

static void	intCase(int literal)
{
	printChar(literal);

	std::cout << "int: " << literal << '\n';
	std::cout << "float: " << static_cast<float>(literal) << ((literal <= -1000000 || literal >= 1000000) ? "\n" : ".0f\n");
	std::cout << "double: " << static_cast<double>(literal) << ((literal <= -1000000 || literal >= 1000000) ? "\n" : ".0\n");
}

static void	fractionalCase(double literal, bool isNan)
{
	printChar(static_cast<int>(literal));

	std::cout << "int: ";
	if (literal < static_cast<double>(INT_MIN) || literal > static_cast<double>(INT_MAX) || isNan)
		std::cout << "impossible.\n";
	else
		std::cout << static_cast<int>(literal) << '\n';
	std::cout << "float: " << static_cast<float>(literal) << (((floor(literal) == literal) && (literal > -1000000 && literal < 1000000)) ? ".0f\n" : "f\n");
	std::cout << "double: " << literal << (((floor(literal) == literal) && (literal > -1000000 && literal < 1000000)) ? ".0\n" : "\n");
}

static scalarType findType(char *literal)
{
	int litLen = strlen(literal);
	if (litLen == 1 && !std::isdigit(static_cast<int>(literal[0])))
		return CHAR;
	char *litEnd = NULL;
	long nbr = strtol(literal, &litEnd, 10);
	if (!litEnd[0] && litLen <= 11 && nbr >= INT_MIN && nbr <= INT_MAX)
		return INT;
	litEnd = NULL;
	strtod(literal, &litEnd);
	if (!litEnd[0])
		return DOUBLE;
	if (strcmp(litEnd, "f") == 0)
		return FLOAT;
	return ERROR;
}

void	ScalarConverter::converter(char *literal)
{
	switch (findType(literal))
	{
		case CHAR:
			charCase(static_cast<char>(literal[0]));
			break;
		case INT:
			intCase( atoi(literal) );
			break;
		case FLOAT:
			bool isNanF;
			(strcmp(literal, "+nanf") == 0 || strcmp(literal, "-nanf") == 0 || strcmp(literal, "nanf") == 0) ? isNanF = true : isNanF = false;
			fractionalCase(atof(literal), isNanF);
			break;
		case DOUBLE:
			bool isNan;
			(strcmp(literal, "+nan") == 0 || strcmp(literal, "-nan") == 0 || strcmp(literal, "nan") == 0) ? isNan = true : isNan = false;
			fractionalCase(atof(literal), isNan);
			break;
		default:
			std::cerr << "impossible to convert\n";
			break;
	}
}
