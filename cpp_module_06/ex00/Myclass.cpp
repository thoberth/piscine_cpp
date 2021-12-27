/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Myclass.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 10:32:44 by thoberth          #+#    #+#             */
/*   Updated: 2021/12/26 13:24:37 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Myclass.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Myclass::Myclass()
{
}

Myclass::Myclass( const Myclass & src )
{
	*this = src;
}

Myclass::Myclass( const std::string av )
{
	this->_dou =  std::atof(av.c_str());
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Myclass::~Myclass()
{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Myclass &				Myclass::operator=( Myclass const & rhs )
{
	if ( this != &rhs )
	{
		this->_fl = rhs.getFloat();
		this->_dou = rhs.getDouble();
		this->_i = rhs.getInt();
		this->_c = rhs.getChar();
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	Myclass::putChar()
{
	std::cout << "char : ";
	if (this->getDouble() > 31 && this->getDouble() < 127)
	{
		this->_c = static_cast<char>(this->getDouble());
		std::cout << '|' << this->getChar() << '|' << std::endl;
	}
	else if (this->getDouble() >= 0 && this->getDouble() < 128)
		std::cout << "Non Displayable" << std::endl;
	else
		std::cout << "impossible" << std::endl;
	
}

void	Myclass::putInt()
{
	std::cout << "int : ";
	if (this->getDouble() <= std::numeric_limits<int>::max() &&
		this->getDouble() >= std::numeric_limits<int>::min())
	{
		this->_i = static_cast<int>(this->getDouble());
		std::cout << this->getInt() <<std::endl;
	}
	else
		std::cout << "impossible" << std::endl;
	
}

void	Myclass::putFloat()
{
	this->_fl = static_cast<float>(this->getDouble());
	std::cout << "float : " << this->getFloat() << 'f' <<std::endl;
}

void	Myclass::putDouble()
{
	std::cout << "double : " << this->getDouble() << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

float	Myclass::getFloat() const
{ return (this->_fl); }

double	Myclass::getDouble() const
{ return (this->_dou); }

int		Myclass::getInt() const
{ return (this->_i); }

char	Myclass::getChar() const
{ return (this->_c); }

/* ************************************************************************** */
