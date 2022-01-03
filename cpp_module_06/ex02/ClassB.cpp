/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 17:16:56 by thoberth          #+#    #+#             */
/*   Updated: 2021/12/28 17:27:51 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassB.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ClassB::ClassB()
{
}

ClassB::ClassB( const ClassB & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ClassB::~ClassB()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ClassB &				ClassB::operator=( ClassB const & rhs )
{
	(void)rhs;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */