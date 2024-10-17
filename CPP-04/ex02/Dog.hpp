/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vruiz-go <vruiz-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 13:36:27 by VR                #+#    #+#             */
/*   Updated: 2024/10/17 12:19:11 by vruiz-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef DOG_HPP
# define DOG_HPP

# include "AAnimal.hpp"

class Dog : public AAnimal
{
	public:
		Dog();
		virtual ~Dog();
		Dog(const Dog &copy);
		Dog &operator=(const Dog &assign);

		void MakeSound() const;
} ;

# endif
