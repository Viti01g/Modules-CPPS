/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: VR <VR@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 16:41:38 by VR                #+#    #+#             */
/*   Updated: 2024/10/15 17:09:59 by VR               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <exception>
# include "AForm.hpp"
# include "Bureaucrat.hpp"

class RobotomyRequestForm: public AForm
{
	public:
		RobotomyRequestForm(void);
		RobotomyRequestForm(const std::string target);
		RobotomyRequestForm(const RobotomyRequestForm& other);
		~RobotomyRequestForm(void);

		RobotomyRequestForm& operator=(const RobotomyRequestForm& other);

		void execute(Bureaucrat const & executor) const;
};

#endif
