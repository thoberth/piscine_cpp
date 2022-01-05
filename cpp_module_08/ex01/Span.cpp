/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 14:06:33 by thoberth          #+#    #+#             */
/*   Updated: 2022/01/05 19:22:25 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Span::Span() : _N(0)
{}

Span::Span( unsigned int N ) : _N(N)
{
}

Span::Span( const Span & src ) : _N(src._N)
{
	for (size_t i(0); i < src._v.size(); i++)
	{
		this->_v.push_back(src._v[i]);
	}
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Span::~Span()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Span &				Span::operator=( Span const & rhs )
{
	if ( this != &rhs )
	{
		this->_N= rhs._N;
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	Span::addNumber(int add)
{
	try
	{
		if (this->_v.size() < this->_N)
			this->_v.push_back(add);
		else
			throw Span::AlreadyFull();
	}
	catch(std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void	Span::addNumber(std::vector<int>::iterator &begin,
	std::vector<int>::iterator &end)
{
	while (begin != end)
	{
		this->_v.push_back(*begin);
		begin++;
	}
}

std::vector<int>::iterator Span::begin()
{
	return (this->_v.begin());
}

std::vector<int>::iterator Span::end()
{
	return (this->_v.end());
}

size_t		Span::size()
{
	return (this->_v.size());
}

int		Span::shortestSpan()
{
	int res;
	std::sort(_v.begin(), _v.end());
	std::vector<int>::iterator it = _v.begin();
	std::vector<int>::iterator it2 = _v.begin();
	it2++;
	res = *it2 - *it;
	while (it2 != _v.end())
	{
		if (res > (*it2 - *it))
			res = *it2 - *it;
		it++;
		it2++;
	}
	return res;
}

int		Span::longestSpan()
{
	std::sort(_v.begin(), _v.end());
	std::vector<int>::iterator it = _v.begin();
	int i = *--_v.end() - *it;
	// int i(0);
	// while (++it != _v.end())
	// 	i++;
	return (i);
}

const char * Span::AlreadyFull::what() const throw()
{
	return ("Already Full !");
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
