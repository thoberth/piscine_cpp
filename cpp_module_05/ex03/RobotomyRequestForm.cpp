/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 14:43:40 by thoberth          #+#    #+#             */
/*   Updated: 2021/12/28 15:30:01 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequest", 72, 45),
	_target("default target")
{}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequest", 72, 45),
	_target(target)
{}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm & src ) : Form(src),
	_target(src.getTarget())
{}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

RobotomyRequestForm::~RobotomyRequestForm()
{}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

RobotomyRequestForm &				RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs )
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

const char* RobotomyRequestForm::FailureActionException::what() const throw()
{
	return ("The Robotomized has been failed");
}

void	RobotomyRequestForm::Action() const
{
	srand(time(NULL));
	int	random(rand() % 2);
	try
	{
		if (random == 1)
		{
			throw RobotomyRequestForm::FailureActionException();
		}
		else
		{
			std::cout << "* Drilling Noises *\n" <<  this->getTarget()
				<< " has been Robotomized succesfully" << std::endl;
		}
	}
	catch(RobotomyRequestForm::FailureActionException & e) {
		std::cerr << e.what() << std::endl; }
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string		RobotomyRequestForm::getTarget() const
{
	return (this->_target);
}

/* ************************************************************************** */
