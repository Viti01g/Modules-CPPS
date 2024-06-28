/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vruiz-go <vruiz-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 12:20:52 by vruiz-go          #+#    #+#             */
/*   Updated: 2024/06/27 19:09:40 by vruiz-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "phonebook.hpp"

Phonebook::Phonebook()
{
	this->num_cont = 0;
	this->index = 0;
	std::cout << "Constructor called" << std::endl;
}

Phonebook::~Phonebook()
{
	std::cout << "Destructor called" << std::endl;
}

void Phonebook::agregar_contact()
{	
	std::string input;

	std::cout << "First name:" << std::endl;
	std::cin >> input;
	if (std::cin.fail())
			return ;
	if (input.size() > 10)		
	{
		input.resize(9);
		input.resize(10, '.');
	}
	this->_contacts[this->index].setName(input);
	std::cout << "Surname:" << std::endl;
	std::cin >> input;
	if (std::cin.fail())
			return ;
	if (input.size() > 10)		
	{
		input.resize(9);
		input.resize(10, '.');
	}
	this->_contacts[this->index].setSurname(input);
	std::cout << "Nickname:" << std::endl;
	std::cin >> input;
		if (std::cin.fail())
			return ;
	if (input.size() > 10)		
	{
		input.resize(9);
		input.resize(10, '.');
	}
	this->_contacts[this->index].setNickname(input);
	std::cout << "Phone Number:" << std::endl;
	std::cin >> input;
		if (std::cin.fail())
			return ;
	if (input.size() > 10)		
	{
		input.resize(9);
		input.resize(10, '.');
	}
	this->_contacts[this->index].setPhoneNumber(input);
	std::cout << "Secret Number:" << std::endl;
	std::cin >> input;
		if (std::cin.fail())
			return ;
	if (input.size() > 10)		
	{
		input.resize(9);
		input.resize(10, '.');
	}
	this->_contacts[this->index].setSecretNumb(input);

	this->index++;
	if (this->index >= 8)
	{
		this->index = 0;
	}
	if (this->num_cont != 8)
		this->num_cont++;
}

int	Phonebook::Search_Info(){
	std::string	n;
	int 	num;
	std::cout << "Enter the index number to see contact's information: ";
	std::cin >> n;
	if (std::cin.eof())
		exit(EXIT_FAILURE);
	num = atoi(n.c_str());
	if (num <= 0 || num >= 9 || this->_contacts[num - 1].getName().length() == 0){
		std::cout << "Invalid number, please check it" << std::endl;
		return (1);
	}
	std::cout << "Name: " << this->_contacts[num - 1].getName() << std::endl;
	std::cout << "Last name: " << this->_contacts[num - 1].getSurname() << std::endl;
	std::cout << "Nickname: " << this->_contacts[num - 1].getNickname() << std::endl;
	std::cout << "Phone number: " << this->_contacts[num - 1].getPhoneNumber() << std::endl;
	std::cout << "darkest secret: " << this->_contacts[num - 1].getSecretNumb() << std::endl;
	return (1);
}

void Phonebook::mostrarContacto()
{
	int index = 1;
	int	cont = 0;
	std::cout << "+-------------------------------------------+" << std::endl;
		std::cout << "|   INDEX  |   NAME   | Surname  | NickName |" << std::endl;
	while (cont < this->num_cont)
	{
		std::cout << "|-------------------------------------------|" << std::endl;
		std::cout << "|          |          |          |          |" << std::endl;
		std::cout << "|    " <<  index <<  "     |" << std::setw(10) << this->_contacts[cont].getName() << "|" << std::setw(10) << this->_contacts[cont].getSurname() << "|" << std::setw(10) << this->_contacts[cont].getNickname() << "|" << std::endl;
		std::cout << "|          |          |          |          |" << std::endl;
		index++;
		cont++;
	}
	std::cout << "+-------------------------------------------+" << std::endl;
	Search_Info();
}
