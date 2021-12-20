/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 14:43:40 by thoberth          #+#    #+#             */
/*   Updated: 2021/12/20 14:25:52 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <string>
# include <stdlib.h>
# include "Form.hpp"

class RobotomyRequestForm : public Form
{

	public:

		RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm( RobotomyRequestForm const & src );
		~RobotomyRequestForm();

		class FailureActionException : public std::exception
		{
			public:
				const char* what() const throw();
		};

		std::string		getTarget() const;
		void			Action() const;

		RobotomyRequestForm &		operator=( RobotomyRequestForm const & rhs );
	private:
		std::string _target;
};

#endif /* ********************************************* ROBOTOMYREQUESTFORM_H */
