/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 17:02:29 by thoberth          #+#    #+#             */
/*   Updated: 2021/12/28 15:28:53 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Form::Form() : _toSign(0), _toExec(0)
{}

Form::Form(std::string name, int to_sign, int to_exec) : _name(name),
	_signed(false), _toSign(to_sign), _toExec(to_exec)
{}

Form::Form(Form const & src) : _name(src.getName()), _signed(src.getSigned()),
	_toSign(src.getToSign()), _toExec(src.getToExec())
{
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Form::~Form()
{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Form & Form::operator=(Form const & src)
{
	this->_signed = src.getSigned();
	return (*this);
}

std::ostream &			operator<<( std::ostream & o, Form const & i )
{
	o << i.getName() << " is ";
	if (i.getSigned())
		o << "signed!";
	else
		o << "not signed!";
	std::cout << " grade must be " << i.getToSign() << " to sign" << std::endl;
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

const char* Form::FormNotSignedException::what() const throw()
{
	return ("Form is not signed so this cannot be exec");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Grade too Low to Sign");
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("This Grade is not viable");
}

void		Form::beSigned(Bureaucrat const & b)
{
	try
	{
		if (this->_toSign >= b.getGrade())
			this->_signed = true;
		else
			throw Form::GradeTooLowException();
	}
	catch (Form::GradeTooLowException & e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void		Form::execute(Bureaucrat const & executor) const
{
	try
	{
		if (this->getSigned() == false)
			throw Form::FormNotSignedException();
		if (executor.getGrade() > this->getToExec())
			throw Form::GradeTooLowException();
		else
			this->Action();
	}
	catch (Form::FormNotSignedException & e) {
		std::cerr << e.what() << std::endl; }
	catch (Form::GradeTooLowException & e) {
		std::cerr << e.what() << std::endl; }
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string Form::getName() const
{
	return (this->_name);
}

bool		Form::getSigned() const
{
	return (this->_signed);
}

int			Form::getToSign() const
{
	return (this->_toSign);
}

int			Form::getToExec() const
{
	return (this->_toExec);
}

/* ************************************************************************** */
