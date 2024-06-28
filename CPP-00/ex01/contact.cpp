/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vruiz-go <vruiz-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 13:58:37 by vruiz-go          #+#    #+#             */
/*   Updated: 2024/06/19 18:57:12 by vruiz-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "contact.hpp"

Contact::Contact()
{
	//std::cout << "Constructor called" << std::endl;
	return ;
}

/* Contact::Contact(std::string name, std::string surname, std::string nickname, std::string phone_number, std::string secret_numb)
{
	this->name = name;
	this->surname = surname;
	this->nickname = nickname;
	this->phone_number = phone_number;
	this->secret_numb = secret_numb;
} */

Contact::~Contact()
{
	return ;
}

void Contact::setName(std::string name)
{
	this->name = name;
}

void Contact::setSurname(std::string surname)
{
	this->surname = surname;
}

void Contact::setNickname(std::string nickname)
{
	this->nickname = nickname;
}

void Contact::setPhoneNumber(std::string phone_number)
{
	this->phone_number = phone_number;
}

void Contact::setSecretNumb(std::string secret_num)
{
	this->secret_numb = secret_num;
}

std::string Contact::getName()
{
	return (this->name);
}

std::string Contact::getSurname()
{
	return (this->surname);
}

std::string Contact::getNickname()
{
	return (this->nickname);
}

std::string Contact::getPhoneNumber()
{
	return (this->phone_number);
}

std::string Contact::getSecretNumb()
{
	return (this->secret_numb);
}
