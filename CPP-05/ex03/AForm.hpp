/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vruiz-go <vruiz-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 16:34:32 by vruiz-go          #+#    #+#             */
/*   Updated: 2024/10/16 13:51:29 by vruiz-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include <exception>
# include <string>
# include "Bureaucrat.hpp"

# define INFO 0

class Bureaucrat;

class AForm
{
	private:
		const std::string	_name;
		const std::string	_target;
		bool				iSigned;
		const unsigned int	gr_sign;
		const unsigned int	gr_exec;
	public:
		AForm();
		AForm(const std::string name, unsigned int _gr_sign, unsigned int _gr_exec);
		AForm(const std::string name, std::string target, unsigned int _gr_sign, unsigned int _gr_exec);
		virtual ~AForm();
		AForm(const AForm &copy);
		AForm &operator=(const AForm &assign);

		std::string getName() const;
		bool getSigned() const;
		const std::string getTarget(void) const;
		unsigned int getGrSign() const;
		unsigned int getGrExec() const;
		
		virtual void execute(Bureaucrat const & executor) const = 0;
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
		class NotSignedException : public std::exception
		{
			public:
				const char* what(void) const throw();
		} ;
} ;

std::ostream& operator<<(std::ostream& out, AForm& form);

# endif
