/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 14:44:02 by thoberth          #+#    #+#             */
/*   Updated: 2021/12/18 19:03:42 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardon", 25, 5),
	_target("default target")
{}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardon", 25, 5),
	_target(target)
{}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm & src ) : Form(src),
	_target(src.getTarget())
{}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

PresidentialPardonForm::~PresidentialPardonForm()
{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

PresidentialPardonForm &				PresidentialPardonForm::operator=( PresidentialPardonForm const & rhs )
{
	if ( this != &rhs )
	{
		this->_target = rhs.getTarget();
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void		PresidentialPardonForm::Action() const
{
	std::cout << this->getTarget() << " has been pardoned by Zafod Beeblebox" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string		PresidentialPardonForm::getTarget() const
{
	return (this->_target);
}

/* ************************************************************************** */
