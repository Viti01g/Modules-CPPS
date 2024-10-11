/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: VR <VR@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 16:32:32 by vruiz-go          #+#    #+#             */
/*   Updated: 2024/10/11 16:00:51 by VR               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"
# include "Form.hpp"

int	main(void)
{
	Bureaucrat ivan("Ivan", 4);
	Bureaucrat carlos("Carlos", 55);
	Form workContract("Work Contract", 50, 45);
	Form wrongContract1("Work Contract", 0, 34);
	Form wrongContract2("Work Contract", 151, 34);
	Form wrongContract3("Work Contract", 33, 0);
	Form wrongContract4("Work Contract", 33, 151);

	std::cout << workContract << std::endl;
	
	carlos.signForm(workContract);
	ivan.signForm(workContract);
	ivan.signForm(workContract);

	std::cout << workContract << std::endl;
	
	return 0;
}
