/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 14:43:20 by thoberth          #+#    #+#             */
/*   Updated: 2021/12/18 19:03:35 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include <string>
# include <fstream>
# include "Form.hpp"

class ShrubberyCreationForm : public Form
{
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm( ShrubberyCreationForm const & src );
		~ShrubberyCreationForm();

		class ErrorCreatingFileException : public std::exception
		{
			public :
				const char* what() const throw();
		};

		std::string		getTarget() const;
		void			Action() const ;

		ShrubberyCreationForm &		operator=( ShrubberyCreationForm const & rhs );
	private:
		std::string _target;

};

#endif /* ******************************************* SHRUBBERYCREATIONFORM_H */
