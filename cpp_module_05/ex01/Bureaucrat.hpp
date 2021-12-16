/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 16:55:09 by thoberth          #+#    #+#             */
/*   Updated: 2021/12/16 17:04:36 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>

class Bureaucrat : public std::exception
{
	public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		~Bureaucrat() throw();

		const char*	GradeTooHighException() throw();
		const char*	GradeTooLowException() throw();

		void	incGrade();
		void	decGrade();

		std::string getName() const;
		int			getGrade() const;
	private:
		std::string const _name;
		int _grade;
};

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i );

#endif /* ****************************************************** BUREAUCRAT_H */