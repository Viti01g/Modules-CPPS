/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vruiz-go <vruiz-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 17:57:38 by vruiz-go          #+#    #+#             */
/*   Updated: 2024/09/26 17:58:00 by vruiz-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"
# include "info.hpp"
# include <iostream>

class Ice : public AMateria
{
	public:
		Ice();
		Ice(const Ice& other);
		virtual ~Ice();
		
		Ice& operator=(const Ice& other);
		
		virtual AMateria* clone(void) const;
		virtual void use(ICharacter& target);
};

# endif