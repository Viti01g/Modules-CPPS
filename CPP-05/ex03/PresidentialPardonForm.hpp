/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: VR <VR@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 16:41:01 by VR                #+#    #+#             */
/*   Updated: 2024/10/15 17:04:52 by VR               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include <exception>
# include "AForm.hpp"
# include "Bureaucrat.hpp"

class PresidentialPardonForm: public AForm
{
	public:
		PresidentialPardonForm(void);
		PresidentialPardonForm(const std::string target);
		PresidentialPardonForm(const PresidentialPardonForm& other);
		~PresidentialPardonForm(void);

		PresidentialPardonForm& operator=(const PresidentialPardonForm& other);

		void execute(Bureaucrat const & executor) const;
};

#endif
