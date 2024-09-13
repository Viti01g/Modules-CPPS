/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: VR <VR@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 12:45:48 by VR                #+#    #+#             */
/*   Updated: 2024/09/13 18:08:18 by VR               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &copy);
		ScavTrap &operator=(const ScavTrap &assign);
		~ScavTrap();

		void GuardGate();
		void attack(const std::string &target);
} ;

# endif
