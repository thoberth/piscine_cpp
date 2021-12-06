/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 16:10:37 by thoberth          #+#    #+#             */
/*   Updated: 2021/12/06 16:52:25 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _valeur(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & to_copie)
{
	this->_valeur = to_copie._valeur;
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	return (this->_valeur);
}

void Fixed::setRawBits(int const raw)
{
	this->_valeur = raw;
}

Fixed& Fixed::operator+=(Fixed const& a)
{
	std::cout << "Assignation operator += called" << std::endl;
	this->_valeur += a._valeur;
	return *this;
}
