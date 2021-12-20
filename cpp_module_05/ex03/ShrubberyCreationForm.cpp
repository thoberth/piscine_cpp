/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 14:43:20 by thoberth          #+#    #+#             */
/*   Updated: 2021/12/18 19:03:37 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreation", 145, 137),
	_target("default target")
{}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreation", 145, 137),
	_target(target)
{}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm & src ) : Form(src),
	_target(src.getTarget())
{}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ShrubberyCreationForm &				ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs )
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

const char* ShrubberyCreationForm::ErrorCreatingFileException::what() const throw()
{
	return "Error while creating file";
}

void		ShrubberyCreationForm::Action() const
{
	std::string		filename(this->getTarget() + "_shrubbery");
	std::ofstream	flux(filename.c_str());

	try
	{
		if (!flux)
			throw ShrubberyCreationForm::ErrorCreatingFileException();
	}
	catch(ShrubberyCreationForm::ErrorCreatingFileException & e) {
		std::cout << e.what() <<std::endl; return; }
	flux << "        .,\n"
	<< "          'b      *\n"
	<< "           '$    #.\n"
	<< "            $:   #:\n"
	<< "            *#  @):\n"
	<< "            :@,@):   ,.**:'\n"
	<< "  ,         :@@*: ..**'\n"
	<< "   '#o.    .:(@'.@**'\n"
	<< "      'bq,..:,@@*'   ,*\n"
	<< "      ,p$q8,:@)'  .p*'\n"
	<< "     '    '@@Pp@@*'\n"
	<< "           Y7'.'\n"
	<< "          :@):.\n"
	<< "         .:@:'.\n"
	<< "       .::(@:.\n" ;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string ShrubberyCreationForm::getTarget() const
{
	return (this->_target);
}

/* ************************************************************************** */
