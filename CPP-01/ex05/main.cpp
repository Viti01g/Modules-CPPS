/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: VR <VR@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 12:15:08 by VR                #+#    #+#             */
/*   Updated: 2024/07/21 13:15:00 by VR               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Harl.hpp"

int main()
{
	std::string cmd;
	Harl harl;
	while (1)
	{
		std::cin >> cmd;
		harl.complain(cmd);
	}
}