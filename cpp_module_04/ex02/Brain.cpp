/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 14:15:20 by thoberth          #+#    #+#             */
/*   Updated: 2021/12/13 13:18:33 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Brain::Brain()
{
	for (int i(0); i < 100; i++)
		_ideas[i] = "There is no idea";
	std::cout << "Constructor Brain Called" << std::endl;
}

Brain::Brain( const Brain & src )
{
	std::cout << "Constructor by copy Brain Called" << std::endl;
	for (int i(0); i < 100; i++)
		this->_ideas[i] = src._ideas[i];
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Brain::~Brain()
{
	std::cout << "Destructor Brain Called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Brain &				Brain::operator=( Brain const & rhs )
{
	std::cout << "operator brain = called" << std::endl;
	if (this != &rhs)
	{
		for (int i = 0; i < 100 ; i++)
			this->_ideas[i] = rhs._ideas[i];
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/


std::string Brain::getIdeas(int index)
{
	if (index >= 100 || index < 0)
	{
		std::cout << "Wrong Index!" << std::endl;
		return NULL;
	}
	return (this->_ideas[index]);
}

void		Brain::setIdeas(std::string an_idea, int index)
{
	if (index >= 100 || index < 0)
		std::cout << "Wrong Index!" << std::endl;
	this->_ideas[index] = an_idea;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
