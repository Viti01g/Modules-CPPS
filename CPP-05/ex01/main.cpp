/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vruiz-go <vruiz-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 16:32:32 by vruiz-go          #+#    #+#             */
/*   Updated: 2024/10/14 13:21:53 by vruiz-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"
# include "Form.hpp"

int	main(void)
{
{
	Bureaucrat	bur("Bob", 1);
	std::cout << "aqui" << std::endl;
	Form		form("form 28B", 10, 10);
	Form		form2("form 28C", 10, 10);

	std::cout << form << std::endl;
	std::cout << form2 << std::endl;
	bur.signForm(form);
	bur.DecrementGrade();
	bur.signForm(form2);
	std::cout << form << std::endl;
	std::cout << form2 << std::endl;
}
}
