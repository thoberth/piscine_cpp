/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 16:11:07 by thoberth          #+#    #+#             */
/*   Updated: 2021/12/16 13:51:55 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:
	int	_valeur;
	static int const nbr_bit = 8;
public:
	Fixed();
	Fixed(Fixed const & copie);
	~Fixed();

	/* renvoie la valeur brute du nombre a point fixe */
	int getRawBits(void) const;
	/* donne la valeur brute du nombre a point fixe */
	void setRawBits(int const raw);
	/* permet d'utiliser l'operateur += pour la classe Fixed */
	Fixed& operator=(Fixed const& a);
};

#endif