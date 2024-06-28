/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vruiz-go <vruiz-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 16:57:37 by vruiz-go          #+#    #+#             */
/*   Updated: 2024/06/27 19:01:55 by vruiz-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP

# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include <stdlib.h>
# include "contact.hpp"

class Phonebook
{
	private:
		int	num_cont;
		int index;
		Contact _contacts[8];

	public:
		Phonebook ();
		~Phonebook();
		//void	setContacts(int );
		std::string	Config_str(std::string str);
		int			Search_Info();
		void		agregar_contact();
		void		mostrarContacto();
};

# endif