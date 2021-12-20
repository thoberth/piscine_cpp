/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 17:02:29 by thoberth          #+#    #+#             */
/*   Updated: 2021/12/18 18:26:55 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public:
		Form();
		Form(std::string name, int to_sign, int to_exec);
		Form(Form const & src);
		virtual ~Form();
	
		class FormNotSignedException : public std::exception
		{
			public:
				const char* what() const throw();

		};

		class GradeTooLowException : public std::exception
		{
			public :
				const char* what() const throw();
		};

		class GradeTooHighException : public std::exception
		{
			public:
				const char* what() const throw();
		};

		std::string getName() const;
		bool		getSigned() const;
		int			getToSign() const;
		int			getToExec() const;

		void			beSigned(Bureaucrat const & b);
		void			execute(Bureaucrat const & executor) const;
		virtual void	Action() const = 0;

		Form & operator=(Form const & src);

	private:
		std::string const	_name;
		bool 				_signed;
		int			const	_toSign;
		int			const	_toExec;

};

std::ostream &			operator<<( std::ostream & o, Form const & i );

#endif /* ************************************************************ FORM_H */
