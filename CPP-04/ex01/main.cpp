/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: VR <VR@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 13:36:30 by VR                #+#    #+#             */
/*   Updated: 2024/09/23 20:30:02 by VR               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Animal.hpp"
# include "Dog.hpp"
# include "Cat.hpp"
# include "WrongCat.hpp"

int main()
{
	Animal *animalList[100];
	// half of the list are Dogs
	for (int i = 0; i < 50; i++)
		animalList[i] = new Dog();
	// other half are Cats
	for (int i = 50; i < 100; i++)
		animalList[i] = new Cat();

	std::cout << "-------------------" << std::endl;

	std::cout << animalList[0]->getType() << std::endl;
	std::cout << animalList[50]->getType() << std::endl;

	Dog *testDog1 = new Dog();
	Animal testDog2 = Dog(*testDog1);
	std::cout << testDog2.getType() << std::endl;
	testDog2.MakeSound();

	delete testDog1;

	std::cout << "-------------------" << std::endl;

	// delete all animals in the list
	for (int i = 0; i < 100; i++)
		delete animalList[i];
	return 0;
}