/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 17:15:45 by thoberth          #+#    #+#             */
/*   Updated: 2021/12/29 18:04:50 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassA.hpp" 

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ClassA::ClassA()
{
}

ClassA::ClassA( const ClassA & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ClassA::~ClassA()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ClassA &				ClassA::operator=( ClassA const & rhs )
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
