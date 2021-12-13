/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 19:27:30 by thoberth          #+#    #+#             */
/*   Updated: 2021/12/13 19:27:42 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

IMateriaSource::IMateriaSource()
{
}

IMateriaSource::IMateriaSource( const IMateriaSource & src )
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

IMateriaSource::~IMateriaSource()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

IMateriaSource &				IMateriaSource::operator=( IMateriaSource const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, IMateriaSource const & i )
{
	//o << "Value = " << i.getValue();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
