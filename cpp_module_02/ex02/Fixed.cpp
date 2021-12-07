/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 17:02:36 by thoberth          #+#    #+#             */
/*   Updated: 2021/12/07 16:22:44 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _valeur(0)
{
}

Fixed::Fixed(const int to_convert)
{
	this->_valeur = to_convert << this->bits;
}

Fixed::Fixed(const float to_convert)
{
	this->_valeur = roundf(to_convert * (1 << this->bits));
}

Fixed::Fixed(const Fixed& to_copy) : _valeur(to_copy._valeur)
{
}

Fixed::~Fixed()
{
}

Fixed& Fixed::operator=(const Fixed& a)
{
	this->_valeur = a._valeur;
	return *this;
}

Fixed& Fixed::operator-(const Fixed& a)
{
	this->_valeur -= a._valeur;
	return *this;
}

Fixed& Fixed::operator*(const Fixed& a)
{
	this->_valeur *= a._valeur;
	return *this;
}

Fixed& Fixed::operator/(const Fixed& a)
{
	this->_valeur /= a._valeur;
	return *this;
}

bool Fixed::operator>(const Fixed& a) const
{
	if (this->_valeur > a._valeur)
		return (true);
	return (false);
}

bool Fixed::operator<(const Fixed& a) const
{
	if (this->_valeur < a._valeur)
		return (true);
	return (false);
}

bool Fixed::operator>=(const Fixed& a) const
{
	if (this->_valeur >= a._valeur)
		return (true);
	return (false);
}

bool Fixed::operator<=(const Fixed& a) const
{
	if (this->_valeur <= a._valeur)
		return (true);
	return (false);
}

bool Fixed::operator==(const Fixed& a) const
{
	if (this->_valeur == a._valeur)
		return (true);
	return (false);
}

bool Fixed::operator!=(const Fixed& a) const
{
	if (this->_valeur != a._valeur)
		return (true);
	return (false);
}

Fixed& Fixed::operator++(void)
{
	this->_valeur++;
	return *this;
}

Fixed& Fixed::operator--(void)
{
	this->_valeur--;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed old = *this;
	operator++();
	return (old);
}

Fixed Fixed::operator--(int)
{
	Fixed old = *this;
	operator--();
	return (old);
}

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
	if (a < b)
		return (a);
	return (b);
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
	if (a < b)
		return (a);
	return (b);
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
	if (a > b)
		return (a);
	return (b);
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
	if (a > b)
		return (a);
	return (b);
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