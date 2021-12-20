/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 14:22:04 by thoberth          #+#    #+#             */
/*   Updated: 2021/12/20 17:29:39 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Intern::Intern()
{
}

Intern::Intern( const Intern & src )
{
	(void)src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Intern::~Intern()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Intern &				Intern::operator=( Intern const & rhs )
{
	(void)rhs;
	std::cout << "Nothing to copy" << std::endl;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

const char * Intern::FormIsUnknowException::what() const throw()
{
	return ("This form is Unknow");
}

Form * Intern::makeForm(std::string form, std::string target)
{
	int i = 0;
	std::string const targetting[3] = {"presidential pardon", "robotomy request",
		"shrubbery creation"};
	while (i < 3 && (targetting[i] != form))
		i++;
	try
	{
		if (i > 2)
			throw Intern::FormIsUnknowException();
		switch (i)
		{
		case 0 :
			std::cout << "Intern creates " << form << std::endl;
			return (new PresidentialPardonForm(target));
		case 1 :
			std::cout << "Intern creates " << form << std::endl;
			return (new RobotomyRequestForm(target));
		case 2 :
			std::cout << "Intern creates " << form << std::endl;
			return (new ShrubberyCreationForm(target));
		}
	}
	catch (Intern::FormIsUnknowException & e){
		std::cout << e.what() << std::endl; }
	return NULL;
}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
