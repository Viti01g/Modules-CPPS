/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: VR <VR@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 16:34:32 by vruiz-go          #+#    #+#             */
/*   Updated: 2024/10/11 18:15:52 by VR               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <exception>
# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string	_name;
		bool				iSigned;
		const unsigned int	gr_sign;
		const unsigned int	gr_exec;
	public:
		Form();
		Form(const std::string name, unsigned int _gr_sign, unsigned int _gr_exec);
		~Form();
		Form(const Form &copy);
		Form &operator=(const Form &assign);

		std::string getName() const;
		bool getSigned();
		unsigned int getGrSign() const;
		unsigned int getGrExec() const;
		
		void beSigned(const Bureaucrat signer);

		class GradeTooLowException : public std::exception
		{
			public:
				const char *what() const throw();
		} ;

		class GradeTooHighException : public std::exception
		{
			public:
				const char *what() const throw();
		} ;
} ;

std::ostream& operator<<(std::ostream& out, Form& form);

# endif
