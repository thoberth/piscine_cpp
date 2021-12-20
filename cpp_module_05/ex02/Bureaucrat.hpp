/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 16:55:09 by thoberth          #+#    #+#             */
/*   Updated: 2021/12/18 18:16:19 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include "Form.hpp"

class Form;

class Bureaucrat
{
	public:
		Bureaucrat();
		Bureaucrat( Bureaucrat const & src);
		Bureaucrat(std::string name, int grade);
		~Bureaucrat();

		class GradeTooHighException : std::exception
		{
			public:
				const char * what() const throw();
		};

		class GradeTooLowException : std::exception
		{
			public:
				const char * what() const throw();
		};

		void	executeForm(Form const & form);
		void	signForm(Form & f);
		void	incGrade();
		void	decGrade();

		std::string getName() const;
		int			getGrade() const;

		Bureaucrat & operator=(Bureaucrat const & src);
	private:
		std::string const	_name;
		int					_grade;
};

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i );

#endif /* ****************************************************** BUREAUCRAT_H */
