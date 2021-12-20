/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 14:22:04 by thoberth          #+#    #+#             */
/*   Updated: 2021/12/20 17:26:17 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern
{
	public:
		Intern();
		Intern( Intern const & src );
		~Intern();

		class FormIsUnknowException : public std::exception
		{
			public:
				const char * what() const throw();
		};

		Intern &		operator=( Intern const & rhs );

		Form * makeForm(std::string form, std::string target);

	private:
};

#endif /* ********************************************************** INTERN_H */
