/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vruiz-go <vruiz-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 17:48:40 by vruiz-go          #+#    #+#             */
/*   Updated: 2024/06/28 17:55:59 by vruiz-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

int	main()
{
	Zombie *zombie;
	zombie = newZombie("Julian");
	randomChump("Govi");
	randomChump("Pipex");
	delete zombie;
	return 0;
}
