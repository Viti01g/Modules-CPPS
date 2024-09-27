/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vruiz-go <vruiz-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 17:45:26 by vruiz-go          #+#    #+#             */
/*   Updated: 2024/09/26 17:58:13 by vruiz-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"
# include "info.hpp"
# include <iostream>

class Cure : public AMateria
{
	public:
		Cure();
		Cure(const Cure& other);
		virtual ~Cure();
		
		Cure& operator=(const Cure& other);

		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);
};

 # endif
