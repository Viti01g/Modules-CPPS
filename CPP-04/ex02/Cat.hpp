/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vruiz-go <vruiz-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 13:36:17 by VR                #+#    #+#             */
/*   Updated: 2024/10/17 12:18:51 by vruiz-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CAT_HPP
# define CAT_HPP

# include "AAnimal.hpp"

class Cat : public AAnimal
{
	public:
		Cat();
		virtual ~Cat();
		Cat(const Cat &copy);
		Cat &operator=(const Cat &assign);

		void MakeSound() const;
} ;

# endif
