/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 16:55:08 by thoberth          #+#    #+#             */
/*   Updated: 2021/12/16 16:36:38 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Bureaucrat::Bureaucrat() : exception(), _name("Bureaucrat"), _grade(150)
{}

Bureaucrat::Bureaucrat(std::string name, int grade) : exception(), _name(name), _grade(grade)
{
	try
	{
		if (this->_grade < 1)
			throw *this;
	}
	catch(Bureaucrat)
	{
		std::cout << this->GradeTooHighException() << std::endl;
	}
	try
	{
		if (this->_grade > 150)
			throw *this;
	}
	catch(Bureaucrat)
	{
		std::cout << this->GradeTooLowException() << std::endl;
	}	
}

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

const char*	Bureaucrat::GradeTooHighException() throw()
{
	this->_grade = 1;
	return ("GradeTooHigh");
}

const char*	Bureaucrat::GradeTooLowException() throw()
{
	this->_grade = 150;
	return ("GradeTooLow");
}

void	Bureaucrat::incGrade()
{
	try {
		this->_grade--;
		if (this->_grade <= 0 || this->_grade > 150)
			throw *this;
	}
	catch (Bureaucrat)
	{
		std::cout << this->GradeTooLowException() << std::endl;
	}
}

void	Bureaucrat::decGrade()
{
	try {
		this->_grade++;
		if (this->_grade <= 0 || this->_grade > 150)
			throw *this;
	}
	catch (Bureaucrat)
	{
		std::cout << this->GradeTooHighException() << std::endl;
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
