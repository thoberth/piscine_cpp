/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 16:55:08 by thoberth          #+#    #+#             */
/*   Updated: 2021/12/28 15:27:57 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Bureaucrat::Bureaucrat() : _name("Bureaucrat"), _grade(150)
{}

Bureaucrat::Bureaucrat( Bureaucrat const & src ) : _name(src.getName()), _grade(src.getGrade())
{
	try
	{
		if (this->_grade < 1)
			throw Bureaucrat::GradeTooHighException();
		if (this->_grade > 150)
			throw Bureaucrat::GradeTooLowException();
	}
	catch(Bureaucrat::GradeTooHighException & e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch(Bureaucrat::GradeTooLowException & e)
	{
		std::cerr << e.what() << std::endl;
	}
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	try
	{
		if (this->_grade < 1)
			throw Bureaucrat::GradeTooHighException();
		if (this->_grade > 150)
			throw Bureaucrat::GradeTooLowException();
	}
	catch(Bureaucrat::GradeTooHighException & e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch(Bureaucrat::GradeTooLowException & e)
	{
		std::cerr << e.what() << std::endl;
	}
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Bureaucrat::~Bureaucrat()
{}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & src)
{
	this->_grade = src.getGrade();
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i )
{
	o << i.getName() << ", bureaucrat grade " << i.getGrade() << '.' << std::endl;
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

const char*	Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("GradeTooHigh");
}

const char*	Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("GradeTooLow");
}

void	Bureaucrat::incGrade()
{
	try {
		this->_grade--;
		if (this->_grade <= 0 || this->_grade > 150)
			throw Bureaucrat::GradeTooLowException();
	}
	catch (Bureaucrat::GradeTooLowException & e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void	Bureaucrat::decGrade()
{
	try {
		this->_grade++;
		if (this->_grade <= 0 || this->_grade > 150)
			throw Bureaucrat::GradeTooHighException();
	}
	catch (Bureaucrat::GradeTooHighException & e)
	{
		std::cerr << e.what() << std::endl;
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
