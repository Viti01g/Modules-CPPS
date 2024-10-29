/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vruiz-go <vruiz-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 15:20:02 by vruiz-go          #+#    #+#             */
/*   Updated: 2024/10/29 19:02:16 by vruiz-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main(void)
{
	Data* important = new Data;
	
	important->dataInfo = "Here there is some important data!";
	
	uintptr_t serialized = Serializer::serialize(important);
	Data* deserialized = Serializer::deserialize(serialized);
	
	std::cout << "Original Data: " << important->dataInfo << std::endl;
	std::cout << "Serialized Data: " << serialized << std::endl;
	std::cout << "Deserialized Data: " << deserialized->dataInfo << std::endl;
	
	delete important;
	return 0;
}