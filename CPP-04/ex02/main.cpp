/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vruiz-go <vruiz-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 13:36:30 by VR                #+#    #+#             */
/*   Updated: 2024/09/24 13:10:26 by vruiz-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "A_Animal.hpp"
# include "Dog.hpp"
# include "Cat.hpp"
# include "WrongCat.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;//should not create a leak
	delete i;
	Animal	*meta[50];
	for (int i = 0; i < 25; i++)
		meta[i] = new Dog();
	for (int i = 25; i < 50; i++)
		meta[i] = new Cat();
	std::cout << meta[10]->getType() << " " << std::endl;
	std::cout << meta[30]->getType() << " " << std::endl;
	meta[20]->MakeSound(); //will output the dog sound!
	meta[30]->MakeSound();
	for (int i = 0; i < 50; i++)
		delete meta[i];
	const WrongAnimal* wrong = new WrongAnimal();
	const WrongAnimal* p = new WrongCat();
	std::cout << wrong->getType() << " " << std::endl;
	wrong->MakeSound();
	p->MakeSound();
	delete wrong;
	delete p;
	return 0;
}