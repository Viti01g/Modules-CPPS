/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vruiz-go <vruiz-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 12:44:06 by vruiz-go          #+#    #+#             */
/*   Updated: 2024/10/16 13:41:15 by vruiz-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef INTERN_HPP
# define INTERN_HPP

# include "Bureaucrat.hpp"
# include "AForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class AForm;

class Intern
{
	private:

		class NoTargetSpecifiedExcepcion : public std::exception
		{
			const char* what() const throw();
		};

		class FormNotFoundExcepcion : public std::exception
		{
			const char* what() const throw();
		};

	public:
		Intern();
		Intern(const Intern &copy);
		Intern &operator=(const Intern &assign);
		~Intern();

		AForm	*makeForm(std::string form, std::string target);

		AForm *newShrubberyCreationForm(std::string &target);
		AForm *newRobotomyRequestForm(std::string &target);
		AForm *newPresidentialPardonForm(std::string &target);
} ;

# endif
