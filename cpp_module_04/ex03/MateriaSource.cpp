/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 19:27:51 by thoberth          #+#    #+#             */
/*   Updated: 2021/12/14 13:52:10 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

MateriaSource::MateriaSource()
{
	_learn[0] = NULL;
	_learn[1] = NULL;
	_learn[2] = NULL;
	_learn[3] = NULL;
}

MateriaSource::MateriaSource( const MateriaSource & src )
{
	for (int i(0); i < 4; i++)
	{
		if (src._learn[i])
			this->_learn[i] = src._learn[i]->clone();
	}
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

MateriaSource::~MateriaSource()
{
	for (int i(0); i < 4 && this->_learn[i]; i++)
		delete this->_learn[i];
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

MateriaSource &				MateriaSource::operator=( MateriaSource const & rhs )
{
	for (int i(0); i < 4; i++)
	{
		if (this->_learn[i])
			delete this->_learn[i];
	}
	for (int i(0); i < 4; i++)
	{
		if (rhs._learn[i])
			this->_learn[i] = rhs._learn[i]->clone();
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void MateriaSource::learnMateria(AMateria* to_learn)
{
	int i = 0;
	while (i < 4 && this->_learn[i] != NULL)
		i++;
	if (i < 4 && to_learn)
	{
		this->_learn[i] = to_learn;
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for(int i(0); i < 4 && this->_learn[i] ; i++)
	{
		if (this->_learn[i]->getType() == type)
			return this->_learn[i]->clone();
	}
	return (NULL);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
