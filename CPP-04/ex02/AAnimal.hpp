/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vruiz-go <vruiz-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 13:36:38 by VR                #+#    #+#             */
/*   Updated: 2024/10/17 12:18:28 by vruiz-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>
# include <string>

class AAnimal
{
	protected:
		std::string type;
	public:
		AAnimal();
		virtual ~AAnimal();
		AAnimal(const AAnimal &copy);
		AAnimal &operator=(const AAnimal &assign);

		const std::string getType() const;
		virtual void MakeSound() const = 0;
} ;

# endif
