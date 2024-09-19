/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: VR <VR@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 13:36:27 by VR                #+#    #+#             */
/*   Updated: 2024/09/18 16:15:53 by VR               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal
{
	Dog();
	virtual ~Dog();
	Dog(const Dog &copy);
	Dog &operator=(const Dog &assign);

	const void MakeSound();
} ;

# endif
