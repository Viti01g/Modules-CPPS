/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vruiz-go <vruiz-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 17:37:59 by vruiz-go          #+#    #+#             */
/*   Updated: 2024/09/26 17:39:15 by vruiz-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"
# include "AMateria.hpp"
# include "info.hpp"
# include "Cure.hpp"
# include "Ice.hpp"
# include <iostream>

class MateriaSource : public IMateriaSource
{
	private:
		AMateria* _learned[4];
	public:
		MateriaSource(void);
		MateriaSource(const MateriaSource& other);
		virtual ~MateriaSource(void);
		
		MateriaSource& operator=(const MateriaSource& other);

		virtual void learnMateria(AMateria* learn);
		virtual AMateria* createMateria(std::string const & type);
};

# endif