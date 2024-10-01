/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vruiz-go <vruiz-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 13:47:39 by vruiz-go          #+#    #+#             */
/*   Updated: 2024/10/01 13:45:51 by vruiz-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include <iostream>
# include "info.hpp"

class Character : public ICharacter
{
	public:
		Character(void);
		Character(const std::string name);
		Character(const Character& other);
		virtual ~Character(void);
		
		Character& operator=(const Character& other);
		
		virtual std::string const & getName() const;
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);
	private:
		std::string _name;
		AMateria* _inventory[4];
		AMateria** _unequipped;
		int _unequippedSize;
};

# endif
