/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vruiz-go <vruiz-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 17:37:03 by vruiz-go          #+#    #+#             */
/*   Updated: 2024/11/28 12:36:45 by vruiz-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template <typename T>
class Array
{
	private:
		T 		*arr;
		size_t	len;

	public:
		Array(): arr(NULL), len(0) {}

		Array(unsigned int n): arr(new T[n]), len(n) {}

		Array (const Array& other)
		{
			*this = other;
		}

		Array& operator=(const Array& other) {
			if (this != &other) {
				len = other.len;
				arr = new T[len];
				for (size_t i = 0; i < len; i++) {
					arr[i] = other.arr[i];
				}
			}
			return *this;
		}

		~Array() { delete[] arr; }

		T& operator[](size_t index)
		{
			if (index >= len)
				throw std::out_of_range("ERR. Index out of range");

			return this->arr[index];
		}

		size_t size() const {return this->len;}
};

# endif
