/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: VR <VR@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 15:36:46 by VR                #+#    #+#             */
/*   Updated: 2024/09/13 18:15:15 by VR               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"

int main()
{
	ClapTrap a = ClapTrap("Unguembe");
	ScavTrap b = ScavTrap("Osas");

	std::cout << "Machines generated" << std::endl;
	b.GuardGate();
	a.attack("Osas");
	b.takeDamage(0);
	std::cout << "Osas: 'Now it's my turn'" << std::endl;
	b.attack("Unguembe");
	a.takeDamage(10);
	a.attack("P-body");
	b.beRepaired(1);
	b.beRepaired(1);
	return (0);
}
