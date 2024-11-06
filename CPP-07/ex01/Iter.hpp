/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vruiz-go <vruiz-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 16:47:36 by vruiz-go          #+#    #+#             */
/*   Updated: 2024/11/06 16:48:02 by vruiz-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template<typename T, typename Function>
void iter(T* array, size_t len, Function function)
{
	size_t pos = 0;

	while (pos < len)
	{
		function(array[pos]);
		pos++;
	}
}

#endif
