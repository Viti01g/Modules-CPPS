/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: VR <VR@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 13:36:11 by VR                #+#    #+#             */
/*   Updated: 2025/07/07 13:44:03 by VR               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <vector>
# include <climits>
 
class Span 
{
	private:
		std::vector<int> container;
		unsigned int maxSize;
		class spanFullException : public std::exception {
			virtual const char* what() const throw();
		};
		class notEnoughNumbersException : public std::exception {
			virtual const char* what() const throw();
		};

	public:
		Span();
		Span(unsigned int);
		Span(const Span& other);
		Span& operator=(const Span& other);
		~Span();

		int shortestSpan(void) const;
		void addNumber(int nbr);
		int longestSpan(void) const;	
		template <typename T>
		void addManyNumbers(T it_begin, T it_end)
		{
			while (it_begin < it_end)
			{
				this->addNumber(*it_begin);
				it_begin++;
			}
		}
} ;

# endif