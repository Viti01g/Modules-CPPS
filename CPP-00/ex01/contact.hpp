/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vruiz-go <vruiz-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 19:37:24 by vruiz-go          #+#    #+#             */
/*   Updated: 2024/06/19 13:12:13 by vruiz-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CONTACT_HPP

# define CONTACT_HPP

# include <iostream>

class Contact
{
	private:
		std::string name;
		std::string surname;
		std::string nickname;
		std::string	phone_number;
		std::string	secret_numb;
	
	public :
		Contact();
		~Contact();
		Contact(std::string name, std::string surname, std::string nickname, std::string phone_number, std::string secret_numb);
		
		void setName(std::string name);
		void setSurname(std::string surname);
		void setNickname(std::string nickname);
		void setPhoneNumber(std::string phone_number);
		void setSecretNumb(std::string secret_numb);
		std::string getName();
		std::string getSurname();
		std::string getNickname();
		std::string getPhoneNumber();
		std::string getSecretNumb();
};

# endif