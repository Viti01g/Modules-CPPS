/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: VR <VR@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 14:12:35 by VR                #+#    #+#             */
/*   Updated: 2025/07/10 16:21:56 by VR               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_TPP
# define MUTANTSTACK_TPP

#include "MutantStack.hpp"

template<typename T>
MutantStack<T>::MutantStack(void) {}

template<typename T>
MutantStack<T>::MutantStack(const MutantStack& other)
{
	*this = other;
}

template<typename T>
MutantStack<T>::~MutantStack(void) {}

template<typename T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack& other)
{
	if (this != &other)
		std::stack<T>::operator=(other);
	return *this;
}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin(void)
{
	return this->c.begin(); 
}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::end(void)
{
	return this->c.end(); 
}

#endif
