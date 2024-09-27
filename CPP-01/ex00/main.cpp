/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vruiz-go <vruiz-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 17:48:40 by vruiz-go          #+#    #+#             */
/*   Updated: 2024/09/25 20:19:46 by vruiz-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

int	main()
{
	Zombie *zombie;
	zombie = newZombie("Julian");
	randomChump("Govi");
	randomChump("Pipex");
	zombie->Announce();
	delete zombie;
	return 0;
}
