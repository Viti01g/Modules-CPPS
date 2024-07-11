/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: VR <VR@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 17:39:34 by VR                #+#    #+#             */
/*   Updated: 2024/07/11 16:15:28 by VR               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "HumanA.hpp"

/* HumanA::HumanA(std::string name, Weapon &weapon)
{
	this->name = name;
	this->weapon = weapon;
} */

HumanA::HumanA(std::string const name, Weapon &weapon): name(name), weapon(weapon)
{
    this->name = name;
}

void HumanA::Attack()
{
	std::cout << name << " attack whith his " << weapon.getType() << std::endl;
}

HumanA::~HumanA()
{
	return ;
}
