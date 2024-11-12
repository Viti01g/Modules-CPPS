/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vruiz-go <vruiz-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 16:39:50 by vruiz-go          #+#    #+#             */
/*   Updated: 2024/11/12 19:19:44 by vruiz-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <string>
# include <algorithm>
# include <vector>
# include <list>
# include <deque>

template<typename T>
typename T::iterator easyfind(T& items, int nbr)
{
	typename T::iterator it = std::find(items.begin(), items.end(), nbr);
	if (it == items.end())
		throw std::runtime_error("Empty container");
	return it;
}

# endif
