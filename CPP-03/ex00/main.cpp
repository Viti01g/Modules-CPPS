/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: VR <VR@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 15:36:46 by VR                #+#    #+#             */
/*   Updated: 2024/08/23 19:55:47 by VR               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

int main()
{
	ClapTrap a = ClapTrap("Unguembe");
	ClapTrap b = ClapTrap("Osas");

	std::cout << "ClapTraps generated" << std::endl;
	a.attack("Osas");
	b.takeDamage(0);
	b.beRepaired(1);
	a.attack("Osas");
	a.attack("Osas");
	a.attack("Osas");
	b.takeDamage(0);
	b.takeDamage(0);
	b.takeDamage(0);
	std::cout << "Osas: ¿Eso es todo lo que puedes hacer?" << std::endl;
	return (0);
}
