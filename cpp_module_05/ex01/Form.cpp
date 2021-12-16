/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 17:02:29 by thoberth          #+#    #+#             */
/*   Updated: 2021/12/16 18:08:44 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Form::Form() : _name("Form"), _signed(false), _toSign(75), _toExec(125)
{}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Form::~Form()
{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

std::ostream &			operator<<( std::ostream & o, Form const & i )
{
	o << i.getName() << " is ";
	if (i.getSigned())
		o << "signed!" << std::endl;
	else
		o << "not signed!" << std::endl;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

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
