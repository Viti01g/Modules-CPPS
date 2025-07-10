/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: VR <VR@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 14:10:53 by VR                #+#    #+#             */
/*   Updated: 2025/07/10 14:18:12 by VR               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iterator>
# include <algorithm>
# include <stack>
# include <deque>
# include <iostream>
# include <list>

template<typename T>
class MutantStack : public std::stack<T>
{
	public:
		typedef typename std::deque<T>::iterator iterator;

		MutantStack(void);
		MutantStack(const MutantStack& other);
		~MutantStack(void);
		
		MutantStack& operator=(const MutantStack& other);

		iterator begin(void);
		iterator end(void);
};

# include "MutantStack.tpp"

#endif
