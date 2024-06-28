/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vruiz-go <vruiz-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 18:12:53 by vruiz-go          #+#    #+#             */
/*   Updated: 2024/06/28 19:17:41 by vruiz-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie *zombieHorde(int n, std::string name)
{
	int i = 0;
	Zombie *zombie = new Zombie[n];
	while (i < n)
	{
		zombie[i].setName(name);
		zombie[i].Announce();
		i++;
	}
	return (zombie);
}
