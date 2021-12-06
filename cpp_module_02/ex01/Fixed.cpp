/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 17:02:36 by thoberth          #+#    #+#             */
/*   Updated: 2021/12/06 19:13:52 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _valeur(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int to_convert)
{
	this->_valeur = to_convert << this->bits;
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float to_convert)
{
	std::cout << "Float constructor called" << std::endl;
	this->_valeur = roundf(to_convert * (1 << this->bits));
}

Fixed::Fixed(const Fixed& to_copy) : _valeur(to_copy._valeur)
{
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& a)
{
	std::cout << "Assignation operator = called" << std::endl;
	this->_valeur = a._valeur;
	return *this;
}

int Fixed::getRawBits(void) const
{
	return (this->_valeur);
}

void Fixed::setRawBits(int const raw)
{
	this->_valeur = raw;
}

float	Fixed::toFloat(void) const
{
	return ((float)this->_valeur / (float)(1 << this->bits));
}

int		Fixed::toInt(void) const
{
	return (this->_valeur >> this->bits);
}

std::ostream& operator<<(std::ostream &flux, const Fixed& to_stream)
{
	flux << to_stream.toFloat();
	return (flux);
}