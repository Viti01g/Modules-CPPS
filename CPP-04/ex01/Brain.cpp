/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: VR <VR@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 18:01:20 by VR                #+#    #+#             */
/*   Updated: 2024/09/23 19:46:06 by VR               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Brain.hpp"

Brain::Brain()
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = "Nothing.";
	std::cout << "Brain default constructor called." << std::endl;
	return ;
}

Brain::Brain(const Brain &copy)
{
	if (this != &copy)
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = copy.ideas[i];
	}
	std::cout << "Brain copy constructor called." << std::endl;
	return ;
}

Brain &Brain::operator=(const Brain &assign)
{
	if (this != &assign)
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = assign.ideas[i];
	}
	std::cout << "Brain assigment copy constructor called." << std::endl;
	return *this;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called." << std::endl;
	return ;
}
