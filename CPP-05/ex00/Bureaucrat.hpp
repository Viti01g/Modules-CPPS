/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vruiz-go <vruiz-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 15:53:34 by vruiz-go          #+#    #+#             */
/*   Updated: 2024/10/09 16:02:49 by vruiz-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <exception>
# include <string>

class Bureaucrat
{
	private:
		const std::string	_name;
		unsigned int		_range;
	public:
		Bureaucrat();
		Bureaucrat(const std::string name, int range);
		~Bureaucrat();
		Bureaucrat(const Bureaucrat &copy);
		Bureaucrat &operator=(const Bureaucrat &assign);

		unsigned int getGrade() const;
		std::string getName() const;
		void	IncrementGrade();
		void	DecrementGrade();

		class GradeTooHighException : public std::exception
		{
			public:
				const char *what() const throw();
		} ;

		class GradeTooLowException : public std::exception
		{
			public:
				const char *what() const throw();
		} ;
} ;

std::ostream& operator<<(std::ostream& out, const Bureaucrat& bureaucrat);

# endif