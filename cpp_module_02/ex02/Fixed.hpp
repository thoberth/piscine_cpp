/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 16:57:53 by thoberth          #+#    #+#             */
/*   Updated: 2021/12/06 19:52:34 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int _valeur;
	static const int bits = 8;
public:
	Fixed();
	Fixed(const int to_convert);
	Fixed(const float to_convert);
	Fixed(const Fixed& to_copy);

	Fixed& operator=(const Fixed& a);
	Fixed& operator-(const Fixed& a);
	Fixed& operator*(const Fixed& a);
	Fixed& operator/(const Fixed& a);

	bool operator>(const Fixed& a);
	bool operator<(const Fixed& a);
	bool operator>=(const Fixed& a);
	bool operator<=(const Fixed& a);
	bool operator==(const Fixed& a);
	bool operator!=(const Fixed& a);

	Fixed& operator++(void);
	Fixed& operator--(void);
	Fixed& operator++(int);
	Fixed& operator--(int);

	int getRawBits(void) const;
	void setRawBits(int const raw);

	float toFloat(void) const;
	int toInt(void) const;

	~Fixed();
};
	std::ostream& operator<<(std::ostream &flux, const Fixed& to_stream);

#endif
