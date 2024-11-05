/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vruiz-go <vruiz-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:57:09 by vruiz-go          #+#    #+#             */
/*   Updated: 2024/11/05 13:15:37 by vruiz-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <typename T>
void swap(T& value1, T& value2)
{
	T temp = value1;
	value1 = value2;
	value2 = temp;
}

template <typename T>
T min(T& value1, T& value2)
{
	if (value1 < value2)
		return value1;
	else
		return value2;
}

template <typename T>
T max(T& value1, T& value2)
{
	if (value1 > value2)
		return value1;
	else
		return value2;
}

#endif