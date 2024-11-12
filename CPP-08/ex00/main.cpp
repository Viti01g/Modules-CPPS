/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vruiz-go <vruiz-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 16:39:15 by vruiz-go          #+#    #+#             */
/*   Updated: 2024/11/12 19:29:23 by vruiz-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "easyfind.hpp"

int main()
{
	{
		try {
				int arr[] = {8, 4, 5, 9, 17, 86};
				std::vector<int> myVector(arr, arr+ sizeof(arr) / sizeof(arr[0]));
	
				std::vector<int>::iterator it = easyfind(myVector, 86);
				std::cout << "Found number: " << *it << std::endl;
	
			} catch (std::exception & e) {
				std::cout << "Something Wrong: " << e.what() << '\n';
			}
		}
		std::cout << "----------------------------------------------------\n";
		{
			try {
				int arr[] = {85, 78, 33, 9, 11, 99999999};
				std::list<int> myList(arr, arr + sizeof(arr) / sizeof(arr[0]));
	
				std::list<int>::iterator it = easyfind(myList, 99999999);
				std::cout << "Found number: " << *it << std::endl;
	
			} catch (std::exception & e) {
				std::cout << "Something Wrong: " << e.what() << '\n';
			}
		}
		std::cout << "----------------------------------------------------\n";
		{
			try {
				int arr[] = {8, 4, 5, 9, 17, 86};
				std::deque<int> myDeque(arr, arr + sizeof(arr) / sizeof(arr[0]));
	
				std::deque<int>::iterator it = easyfind(myDeque, 8);
				std::cout << "Found number: " << *it << std::endl;
	
			} catch (std::exception & e) {
				std::cout << "Something Wrong: " << e.what() << '\n';
			}
		}
		std::cout << "----------------------------------------------------\n";
		{
			try {
				int arr[] = {8, 4, 5, 9, 17, 86};
				std::vector<int> myVector(arr, arr + sizeof(arr) / sizeof(arr[0]));
	
				std::vector<int>::iterator it = easyfind(myVector, 1241354);
				std::cout << "Found number: " << *it << std::endl;
	
			} catch (std::exception & e) {
				std::cout << "Something Wrong: " << e.what() << '\n';
			}
		}
	return 0;
}
