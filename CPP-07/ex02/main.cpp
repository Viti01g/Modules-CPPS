/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vruiz-go <vruiz-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 17:52:21 by vruiz-go          #+#    #+#             */
/*   Updated: 2024/11/11 16:38:03 by vruiz-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <cstdlib>

int main()
{
	srand(static_cast<unsigned int>(time(0)));
	{
		Array<int> a;
		Array<int> b( 10 );
		Array<int> c = a;
		Array<int> d;
		d = b;

		std::cout << "A - address: "<< &a << " size: " << a.size() << '\n';
		std::cout << "B - address: "<< &b << " size: " << b.size() << '\n';
		std::cout << "C - address: "<< &c << " size: " << c.size() << '\n';
		std::cout << "D - address: "<< &d << " size: " << d.size() << '\n';
	}
	std::cout << "----------------------------------------------------\n";
	{
		int n = 5;
		Array<int> a(n);

		for (int i = 0; i < n; i++) {
			int random = rand();
			a[i] = random;
		}

		for (int i = 0; i < n; i++) {
			std::cout << a[i] << '\n';
		}
	}
	std::cout << "----------------------------------------------------\n";
	{
		try {
			int n = 5;
			Array<int> a(n);

			for (int i = 0; i < n; i++) {
				int random = rand();
				a[i] = random;
			}
			a[-1] = 10;

			for (int i = 0; i < n; i++) {
			std::cout << a[i] << '\n';
			}
			
		} catch (std::exception& e) {
			std::cout << e.what() << '\n';
		}
	}

	return 0;
}