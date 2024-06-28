/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vruiz-go <vruiz-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 20:43:59 by vruiz-go          #+#    #+#             */
/*   Updated: 2024/06/28 19:08:50 by vruiz-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie 
{
	private:
		std::string name;

	public:
		Zombie();
		Zombie(std::string name);
		~Zombie();

	void setName(std::string name);
		void Announce();
};

Zombie *zombieHorde(int n, std::string name);
Zombie *newZombie(std::string name);
void	randomChump(std::string name);

#endif
