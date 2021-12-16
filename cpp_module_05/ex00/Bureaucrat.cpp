/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 16:55:08 by thoberth          #+#    #+#             */
/*   Updated: 2021/12/15 19:00:56 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Bureaucrat::Bureaucrat() : exception(), _name("Bureaucrat"), _grade(150)
{}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Bureaucrat::~Bureaucrat() throw()
{}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i )
{
	o << i.getName() << ", bureaucrat grade " << i.getGrade() << '.' << std::endl;
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

const char*	Bureaucrat::GradeTooLowException() throw()
{
	this->_grade--;
	return ("Bad Grade");
}

void	Bureaucrat::incGrade()
{
	try {
		this->_grade--;
		if (this->_grade <= 0 || this->_grade > 150)
			throw std::exception();
	}
	catch (std::exception e)
	{
		std::cout << "Bad Grade" << std::endl;
		this->_grade++;
	}
}

void	Bureaucrat::decGrade()
{
	try {
		this->_grade++;
		if (this->_grade <= 0 || this->_grade > 150)
			throw Bureaucrat() ;
	}
	catch (Bureaucrat & e)
	{
		std::cout << e.GradeTooLowException() << std::endl;
	}
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string Bureaucrat::getName() const
{
	return (this->_name);
}

int			Bureaucrat::getGrade() const
{
	return (this->_grade);
}

/* ************************************************************************** */
