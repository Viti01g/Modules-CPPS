/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vruiz-go <vruiz-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 17:13:08 by VR                #+#    #+#             */
/*   Updated: 2024/10/16 18:23:57 by vruiz-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"
# include "AForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "Intern.hpp"

int main()
{
	Intern someRandomIntern;
	AForm* rrf;
	Bureaucrat javi("Javi", 5);
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	rrf->beSigned(javi);
	rrf->execute(javi);
	delete rrf;
	rrf = someRandomIntern.makeForm("shrubbery creation", "paya");
	std::cout << "----------------------Aqui en Main--------------------------" << std::endl;
	rrf = someRandomIntern.makeForm("presidential pardon", "Alex");
	rrf->beSigned(javi);
	rrf->execute(javi);
	delete rrf;
	return 0;
}
