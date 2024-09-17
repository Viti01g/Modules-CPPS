/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: VR <VR@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 15:36:46 by VR                #+#    #+#             */
/*   Updated: 2024/09/17 14:04:26 by VR               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

int main()
{
	FragTrap a("ATLAS");
	ScavTrap p = ScavTrap("P-body");

	p.GuardGate();
	a.attack("P-body");
	p.takeDamage(30);
	a.attack("P-body");
	p.takeDamage(30);
	p.beRepaired(5);
	a.attack("P-body");
	p.takeDamage(30);
	a.attack("P-body");
	p.takeDamage(30);
	a.highFivesGuys();
	return 0;
}
