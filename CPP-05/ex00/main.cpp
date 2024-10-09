/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vruiz-go <vruiz-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 15:50:52 by vruiz-go          #+#    #+#             */
/*   Updated: 2024/10/09 15:59:20 by vruiz-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"

int	main( void ) {
	{
		/* OCCF & << overload operator tests */
		Bureaucrat a;
		Bureaucrat b("Pepe", 2);
		Bureaucrat c("Juan", 87);
		Bureaucrat d( a );
		Bureaucrat e;
		e = c;

		std::cout << "\na adress: " << &a << "\na content: " << a << "\n\n";
		std::cout << "b adress: " << &b << "\nb content: " << b << "\n\n";
		std::cout << "c adress: " << &c << "\nc content: " << c << "\n\n";
		std::cout << "d adress: " << &d << "\nd content: " << d << "\n\n";
		std::cout << "e adress: " << &e << "\ne content: " << e << "\n\n"; // Name dont change bc is constant

	}
	std::cout << "\n------------------------------------------------------------\n\n";
	{
		/* Exception tests */
		try {
			Bureaucrat a("Migard", 0);
		} catch (std::exception &e) {
			std::cout << e.what() << '\n';
		}

		try {
			Bureaucrat a("Colorado", 151);
		} catch (std::exception &e) {
			std::cout << e.what() << '\n';
		}

		try {
			Bureaucrat a("Polez", -16);
		} catch (std::exception &e) {
			std::cout << e.what() << '\n';
		}

		try {
			Bureaucrat a("Carola", 10);

			for (int i = 0; i < 10; i++) {
				a.IncrementGrade();
			}
		} catch (std::exception &e) {
			std::cout << e.what() << '\n';
		}

		try {
			Bureaucrat a("Cristian", 141);

			for (int i = 0; i < 10; i++) {
				a.DecrementGrade();
			}
		} catch (std::exception &e) {
			std::cout << e.what() << '\n';
		}
	}
	std::cout << "\n------------------------------------------------------------\n\n";
	{
		/* Normal cases */
		try {
			Bureaucrat a("Miguel", 10);
			Bureaucrat b("Manuel", 36);

			std::cout << a << '\n';
			std::cout << b << "\n\n";

			a.DecrementGrade();
			b.IncrementGrade();

			std::cout << a << '\n';
			std::cout << b << "\n\n";
		} catch (std::exception &e) {
			std::cout << e.what() << '\n';
		}
	}

}
